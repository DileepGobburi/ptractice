#include<stdio.h>
int fun(int a,int b)
{
while(b!=0)
	{
	int carry =a & b;
	a= a^b;
	b= carry <<1;
	}
	return a;
}


int main()
{
int a=10,b=20;
printf("%d",fun(a,b));
}
