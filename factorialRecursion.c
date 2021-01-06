#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
	int n,r;
	printf("enter the number");
	scanf("%d",&n);
	r=factorial(n);
	printf("\n factorial is %d",r);
}
int factorial(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
	   return (n*factorial(n-1));
	}
}