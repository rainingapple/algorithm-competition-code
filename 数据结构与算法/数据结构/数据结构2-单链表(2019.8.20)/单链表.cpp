#include<iostream>
#include<stdio.h>
using namespace std;
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int Status;
typedef struct LNode
{
	int data;
	struct LNode *next;
}LinkList;
//链表基本算法
//对链表要注意，链表地本质是struct，一部分盛数据，一部分是一个指针。虽然说节点整体表达起来像是个指针，但是二者还是有很大的区别
//节点在建立的时候是与建立指针形式一致，此时其与指针完全一致，但是真正输入数据后便不同，其会变为一个储存信息的整体，只是以指针表示，二者不同。
//还要注意不管是二者中的哪一个，其在赋值方面仅仅是地址。p=L->next;p=NULL和L->next=NULL不同，p在以后节点与L->next一致。
//但是在这里改变p只是把它储存的地址变为空，而不是他所指向的（即L->next）变为空，一定注意。
void CreateListF(LinkList *&L,int a[],int n)//头插法建表,已实践三遍，基本掌握。
{
	LinkList *s;
	int i;
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next=NULL;
	for(i=0;i<n;i++)
	{
		s=(LinkList*)malloc(sizeof(LinkList));
		s->data=a[i];
		s->next=L->next;
		L->next=s;
	}
}
void CreateListR(LinkList *&L,int a[],int n)//尾插法建表
{
	LinkList *s,*r;
	int i;
	L=(LinkList*)malloc(sizeof(LinkList));
	r=L;
	for(i=0;i<n;i++)
	{
		s=(LinkList*)malloc(sizeof(LinkList));
		s->data=a[i];
		r->next=s;
		r=s;
	}
	r->next=NULL;
}
void InitList(LinkList *&L)
{
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next=NULL;
}
void DestroyList(LinkList *&L)
{
	LinkList *pre=L,*p=L->next;
	while(p!=NULL)
	{
		free(pre);
		pre=p;
		p=pre->next;
	}
	free(pre);
}
bool ListEmpty(LinkList *L)
{
	return(L->next==NULL);
}
int ListLength(LinkList *L)
{
	int n=0;
	LinkList *p=L;
	while(p->next!=NULL)
	{
		n++;
		p=p->next;
	}
	return n;
}
void DispList(LinkList *L)
{
	LinkList *p=L->next;
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->next;
	}
	cout<<endl;
}
bool GetElem(LinkList *L,int i,int &e)
{
	int j=0;
	LinkList *p=L;
	while(j<i&&p!=NULL)
	{
		j++;
		p=p->next;
	}
	if(p==NULL)
		return false;
	else
	{
		e=p->data;
		return true;
	}
}
int LocateElem(LinkList *L,int e)
{
	int i=1;
	LinkList *p=L->next;
	while(p!=NULL&&p->data!=e)
	{
		i++;
		p=p->next;
	}
	if(p==NULL)
		return 0;
	else
		return i;
}
bool InsertList(LinkList *&L,int i,int e)
{
	int j=0;
	LinkList *p=L,*s;
	while(j<i-1&&p!=NULL)
	{
		j++;
		p=p->next;
	}
	if(p==NULL)
		return false;
	else
	{
		s=(LinkList*)malloc(sizeof(LinkList));
		s->data=e;
		s->next=p->next;
		p->next=s;
		return true;
	}
}
bool ListDelete(LinkList *&L,int i,int &e)//PPT上讲的，额外建立一个中间LinkList的方法。
{
	int j=0;
	LinkList *p=L,*q;
	while(j<i-1&&p!=NULL)
	{
		j++;
		p=p->next;
	}
	if(p==NULL)
		return false;
	q=(LinkList*)malloc(sizeof(LinkList));
	q=p->next;
	if(q==NULL)
		return false;
	e=q->data;
	p->next=q->next;
	free(q);
	q=NULL;
	return true;
}
void delmaxnode(LinkList *&L)//找到单链表最大的元素，再将其删除。
{
	LinkList *p=L->next,*pre=L,*maxp=p,*maxpre=pre;
	while(p!=NULL)
	{
		if(maxp->data<p->data)
		{
			maxp=p;
			maxpre=pre;
		}
		p=p->next;
		pre=pre->next;
	}
	maxpre->next=maxp->next;
	free(maxp);
	maxpre=NULL;
}
void sort(LinkList *&L)//这个破算法花了我3小时理解，不过我觉得是合适的，对链表的理解才算正确，详见开头注释。
	//这个算法可以完成对链表的排序，是先将表拆成L和p引导的两部分，再将p引导的一个一个地插入到L引导的部分。
	//一定要分清这是一个辅助指针还是一个带有数据域的真正的“指针”
{
	LinkList *p,*pre,*q;
	p=L->next->next;//使一个新建的指针p指向原链表的第二个元素。
	L->next->next=NULL;//使第二个元素不指向任何事物。
	while(p!=NULL)
	{
		q=p->next;//用q提前保存p的后继元素的地址
		pre=L;//将pre指向head节点，方便从头到尾扫描L引领的半链表。
		while(pre->next!=NULL&&pre->next->data<p->data)
			pre=pre->next;//从头到尾扫描L引领的部分，将当时的p指的元素插入到合适的排序位置。
		p->next=pre->next;
		pre->next=p;//这两部合起来的效果是做成pre->p->(pre->next)
		p=q;//将p向后错一位
	}
}
void Reverse(LinkList *&L)
{
	LinkList *p=L->next,*q;//*p=L->next这个可以理解为让p成为L->next
	L->next=NULL;
	while(p!=NULL)
	{
		q=p->next;
		p->next=L->next;//注意这个的意思不是p自身的next指向L->next,而是L->next->next=L->next
		L->next=p;//实际上就是另类的头插法
		p=q;
	}
}
void split(LinkList *&L,LinkList *&L1,LinkList *&L2)
{
	LinkList *p=L->next,*q,*r1;
	L1=L;
	r1=L1;
	L2=(LinkList *)malloc(sizeof(LinkList));
	L2->next=NULL;
	while(p!=NULL)
	{
		r1->next=p;
		r1=p;
		p=p->next;
		q=p->next;
		p->next=L2->next;
		L2->next=p;
		p=q;
	}
	r1->next=NULL;
}
void flag(LinkList *&L)//一组只有012的数排序
{
	LinkList *p,*L1,*L2,*r,*r1,*r2;
	L1=NULL;
	L2=NULL;
	p=L->next;
	r=L;
	while(p!=NULL)
	{
		if(p->data==0)
		{
			r->next=p;
			r=p;
		}
		if(p->data==1)
		{
			if(L1==NULL)
			{
				L1=r1=p;
			}
			else
			{
				r1->next=p;
				r1=p;
			}
		}
		if(p->data==2)
		{
			if(L2==NULL)
			{
				L2=r2=p;
			}
			else
			{
				r2->next=p;
				r2=p;
			}
		}
		p=p->next;
	}
	r->next=r1->next=r2->next=NULL;
	r->next=L1;
	r1->next=L2;
}
void main()
{
	LinkList *S,*q;
	int a[10]={1,2,1,0,2,0,1,0,2,1};
	CreateListR(S,a,10);
	DispList(S);
	Reverse(S);
	DispList(S);
	flag(S);
	DispList(S);
}