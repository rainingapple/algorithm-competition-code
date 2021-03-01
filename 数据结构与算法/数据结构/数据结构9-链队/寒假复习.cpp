#include<iostream>
using namespace std;
typedef struct LinkNode{
	int data;
	struct LinkNode *next;
}LinkNode;
typedef struct{
	LinkNode *front,*rear;
}LinkQueue;
//�����и�˵�������frontʵ�����Ǹ���ָ�롣front->next���������Ķ�ͷ.����rearȷʵָ�����һ��Ԫ�ء�
void InitQueue(LinkQueue *&Q)
{
	Q=(LinkQueue*)malloc(sizeof(LinkQueue));
	Q->front=Q->rear;
	Q->front->next=NULL;
}
bool isEmpty(LinkQueue *Q)
{
	if(Q->front=Q->rear)
		return true;
	else
		return false;
}
void EnQueue(LinkQueue *&Q,int e)
{
	LinkNode *s;
	s=(LinkNode*)malloc(sizeof(LinkNode));
	s->data=e;
	s->next=NULL;
	Q->rear->next=s;
	Q->rear=s;
}
bool DeQueue(LinkQueue *&Q,int &e)//������,����������ر���Ҿ���
{
	if(Q->front==Q->rear)
		return false;
	LinkNode *p=Q->front->next;
	e=p->data;
	Q->front->next=p->next;
	if(Q->rear=p)//ע����һ��ֻ��Ϊ�����пձ�÷���
		Q->rear=Q->front;
	free(p);
	return true;
}