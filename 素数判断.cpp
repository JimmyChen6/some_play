#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int b;
	int c=1;
	if(a==1)
	{
		cout<<a<<"�Ȳ�������Ҳ���Ǻ���"; 
	}
	else
	{
	for(b=2;b<=sqrt(a);b++)
	{
		if(a%b==0)
		{
			c++;
		}
	}
	if(c==1)
	{
		cout<<a<<"������";
	}
	else
	{
		cout<<a<<"��������"; 
	}
    }
    return 0;
}
