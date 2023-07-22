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
		cout<<a<<"既不是素数也不是合数"; 
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
		cout<<a<<"是素数";
	}
	else
	{
		cout<<a<<"不是素数"; 
	}
    }
    return 0;
}
