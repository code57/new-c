//cpp格式才能使用
typedef struct LNODE
{
	int data;
	struct LNODE* next;
}LNODE,*LinkList;

int InitList(LinkList &L)//初始化
{
	L = (LNODE*)malloc(sizeof(LNODE));
	if (L == NULL)
	{
		perror("InitList");
		return 1;
	}
	L->next = NULL;
	return 0;
}

LinkList tailInsert(LinkList &L)//尾插法建立
{
	int x;
	
	if (L == NULL)
	{
		perror("tailInsert");
		return NULL;
	}
	LNODE* s, * r = L;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNODE*)malloc(sizeof(LNODE));
		if (s == NULL)
		{
			perror("tailInsert");
			return NULL;
		}
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
	return L;

}

LinkList HeadInsert(LinkList& L)//头插法建立
{
	int x;
	
	if (L == NULL)
	{
		perror("HeadInsert");
		return NULL;
	}
	LNODE* s = L;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNODE*)malloc(sizeof(LNODE));
		if (s == NULL)
		{
			perror("HeadInsert");
			return NULL;
		}
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	
	return L;

}

void prit(LinkList L)
{
	LNODE* r = L;
	while(r->next !=NULL)
	{
		printf("%d ", r->next->data);
		r = r->next;
	}
}

int main()
{
	LinkList L = {0};
	InitList(L);
	L=tailInsert(L);
	/*L = HeadInsert(L);*/
	prit(L);
	free(L);
	L = NULL;
	return 0;
}
