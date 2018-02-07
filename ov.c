#include<stdio.h>
#include<conio.h>
int main()
{
	long int a,b,i;
	printf("\nEnter  intial number :");
	 scanf("%ld",&a);
	printf("\nEnter final number :");
	scanf("%ld",&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==1)
		printf("%d\t",i);
	}
  }
