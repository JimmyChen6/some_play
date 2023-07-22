#include<stdio.h>
#include<stdlib.h>
void circle(int a[10][10],int length,int N,int value);
int main()
{
	int N;
	scanf("%d",&N);
	int a[10][10]={0};
	int value=1;
	circle(a,N,N,value);
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf("%3d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
void circle(int a[10][10],int length,int N,int value)
{
	if(length<=0)
	{
		return;
	}
	int m=(N-length)/2,n=(N+length)/2-1;
	for(int i=m;i<=n;i++)
	{
		a[i][m]=value;
		value=value+1;
	}
	for(int i=m+1;i<=n;i++)
	{
		a[n][i]=value;
		value=value+1;
	}
	for(int i=n-1;i>=m;i-=1)
	{
		a[i][n]=value;
		value=value+1;
	}
	for(int i=n-1;i>m;i-=1)
	{
		a[m][i]=value;
		value=value+1;
	}
	length=length-2;
	circle(a,length,N,value);
}