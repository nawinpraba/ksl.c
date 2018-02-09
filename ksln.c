#include <stdio.h>
#include<conio.h>

int main(void) 
{
	int n,i,s;
	printf("enter the value");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
{ s=n*i;
printf("%d*%d=%d\n",n,i,s);
}
	return 0;
}
