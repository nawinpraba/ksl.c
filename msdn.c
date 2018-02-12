#include <stdio.h>
#include<conio.h>

int main(void) 
{
	long int a,n,d,sum=0;
	printf("enter the values of a,n,d\n");
	scanf("%ld %ld %ld",&a,&n,&d);
            sum = (n * (2 * a + (n - 1)* d ))/ 2;
	printf("%ld",sum);
	return 0;
}
