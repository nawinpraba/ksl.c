#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
printf("enter the value");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(i%2==1)
{
printf("%d",i);
}
}
getch();
}
