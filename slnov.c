#include <stdio.h>

int main(void) {
           int a[100],n,i,j,temp;
           printf("enter the n value");
           scanf("%d",&n);
           printf("enter the values in n times");
           for(i=0;i<n;i++)
           scanf("%d",&a[i]);
           for(i=0;i<n;i++)
           {
           	for(j=i+1;j<n;j++)
           	{
           		if(a[j]<a[i])
           		{
           	               temp=a[j];
           	               a[j]=a[i];
           	               a[i]=temp;
           		}
           	}
           
           }
           for(i=0;i<n;i++)
           printf("%d ",a[i]);
           
	return 0;
}
