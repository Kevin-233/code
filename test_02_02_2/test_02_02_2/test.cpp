#define MaxSize 10
typedef struct
{
  int data[MaxSize];
  int front,rear; //��ͷָ��Ͷ�βָ��
}SqQueue;

void InitQueue(SqQueue &Q)
{
	Q.rear =Q.front=0; //��ʼʱ ���ѡ���βָ��ָ��0
}

//�п�
bool QueueEmpty(SqQueue Q)
{
	if(Q.front==Q.rear)
		return true;
	else 
		false;
}

//���
bool EnQueue(SqQueue &Q,int x)
{
	if((Q.rear+1)%MaxSize==Q.front)
		return false;      //��������
	Q.data[Q.rear]=x;
	Q.rear=(Q.rear+1)%MaxSize;
	return true;
}

//����(ɾ��һ����ͷԪ��)
bool DeQueue(SqQueue &Q,int &x)
{
	if(Q.rear==Q.front)
		return false;
	x=Q.data[Q.front];
	Q.front=(Q.front+1)%MaxSize;
	return true;

}
int main()
{
  SqQueue Q;
  InitQueue(Q);

}