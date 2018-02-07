#include<stdio.h>
#include<conio.h
int main()
{
int a,i;
printf("enter the number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
break;
}
if(a==i)
{
printf("prime number");
}
else
{
printf("not prime number");
}
getch();
]
