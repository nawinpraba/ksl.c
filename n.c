       #include<stdio.h>
        #include<conio.h>
                   int main()
{
           int a,b,c;
printf("enter the value of a\n");
          scanf('%d",&a);
      while  (a!=0)
      {
              
         c=a%10;
        b=b*10+c
        a=a/10;
    }
    if(a==b)
    {
    printf("%d is palindrome",a);
    }
    else
    {
    printf("%d is not palindrome",a);
    }
    getch();
    }
