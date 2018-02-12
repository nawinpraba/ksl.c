#include <stdio.h>

int main(void) {
	int n,m,temp,i,rem=0;
	printf("enter the values of n nad m");
    scanf("%d%d",&n,&m);
for(i=n;i<m;i++)
{ int sum=0;
    temp=i;
    while(temp!=0)
{
    rem=temp%10;
    sum=sum+rem*rem*rem;
    temp=temp/10;
}
if(sum==i)
printf("amstrong number is %d\n",sum);
}
return 0;
}
