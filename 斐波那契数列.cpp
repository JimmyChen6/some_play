#include<iostream>
using namespace std;
int main()
{
	int a=1;
	int b=1;
	int c=1;
	for(a=1;a<=25;a++)
	{
		if (a%2==0) {
		b=b+c;cout<<b<<"  ";}
		else 
		{
		c=b+c;cout<<c<<"  ";}
	}
	return 0;
}
