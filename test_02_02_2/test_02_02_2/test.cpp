#define MaxSize 10
typedef struct
{
  int data[MaxSize];
  int front,rear; //队头指针和队尾指针
}SqQueue;

void InitQueue(SqQueue &Q)
{
	Q.rear =Q.front=0; //初始时 队友、队尾指针指向0
}

//判空
bool QueueEmpty(SqQueue Q)
{
	if(Q.front==Q.rear)
		return true;
	else 
		false;
}

//入队
bool EnQueue(SqQueue &Q,int x)
{
	if((Q.rear+1)%MaxSize==Q.front)
		return false;      //队满报错
	Q.data[Q.rear]=x;
	Q.rear=(Q.rear+1)%MaxSize;
	return true;
}

//出队(删除一个对头元素)
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