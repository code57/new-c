//队列存储与输出

typedef struct 
{
	int data[maxsize];
	int front, rear;
}sq;

void initsq(sq& Q)
{
	Q.rear = Q.front=0;
}

int ensq(sq& Q, int x)//入队
{
	if ((Q.rear+1) % maxsize == Q.front)//
	{
		return 1;
	}
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1)%maxsize;
	return 0;
}

int desq(sq& Q, int x)//出队
{
	if (Q.rear == Q.front)
	{
		return 1;
	}
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % maxsize;
	printf("%d ", x);
	return x;
}

int main()
{
	sq Q;
	initsq(Q);
	int i = 0;
	int x = 0;
	scanf("%d", &x);
	for (i = 0; i < 10; i++)
	{
		if (ensq(Q, x) == 1)
		{
			printf("存储失败,队列已满");
			break;
		}
		scanf("%d", &x);
	}

	for (i = 0; i < 10; i++)
	{
		desq(Q, x);
	}
	return 0;

}
