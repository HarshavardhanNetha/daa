#include<stdio.h>
int fib(int n)
{
	if(n==0||n==1)
		return n;
	else
		return fib(n-1)+fib(n-2);
}
void main()
{
	int n,result;
	printf("enter the fib number");
	scanf("%d",&n);
	result=fib(n);
	printf("fib(%d)->%d",n,result);
}
