#include<stdio.h>
void Hanoi(int x,const char* origin,const char* middle,const char* target)
{
	if(x==1)
	{
		printf("%d:%c->%c\n",x,*origin,*target);
		return;
	}
	Hanoi(x-1,origin,target,middle);
	printf("%d:%c->%c\n",x,*origin,*target,*middle);
	Hanoi(x-1,middle,origin,target);
}
int main()
{
	int x;
	scanf("%d",&x);
	const char a='a',b='b',c='c';
	Hanoi(x,&a,&b,&c);
	getchar();
	getchar();
	return 0;
}