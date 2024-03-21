#include<stdio.h>
#include<ctype.h>
int add(int a,int b)
{  
    return(a+b);
 }
int  sub(int a,int b)
{ 
  return(a-b);
}
int multi(int a,int b)
{ 
   return(a*b);
 }
int div(int a ,int b)
{
  return(a/b);
}
int main()
{
   int a,b,sum;
   char op;
   printf("enter the symbol of operation you want: ");
   scanf("%c",&op);
   printf("enter the number for the operation:");
   scanf("%d %d",&a,&b);
   switch(op)
   {
     case '+': sum=add(a,b);
      printf("%d %c %d = %d",a,op,b,sum);
               break;
     case '-': sum=sub(a,b);
      printf("%d %c %d = %d",a,op,b,sum);
               break;
     case '*': sum=multi(a,b);
      printf("%d %c %d = %d",a,op,b,sum);
               break;
     case '/': sum=div(a,b);
      printf("%d %c %d = %d",a,op,b,sum);
               break;
               default:printf("invalid");
                        
    }
    }
