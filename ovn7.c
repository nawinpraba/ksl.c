#include<stdio.h>
int main()
{
   int n,b[100],i,temp,j,k;
   printf("enter the n value");
   scanf("%d",&n);
   printf("enter the values in n times");
   for(i=0;i<=n;i++)
   {
       scanf("%d\t",&b[i]);
   }
   for(j=1;j<=n;j++)
   {
      for(k=j+1;k<=n;k++)
      {
        if(b[j]>=b[k])
        {
        temp=b[j];
        b[j]=b[k];
        b[k]=temp;
            
        }
      }
   
   }
        printf(" %d",b[j/2]);
        return 0;
}
