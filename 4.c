#include<stdio.h>
main()
{
  int b,c,d;
  char a;
  printf("enter the operation +,-,*,/\n");
  scanf("\n%c",&a);
  printf("enter two number for operation");
  scanf("%d   %d",&b,&c);
  switch(a)
  {
case '+': d=b+c;
            printf("sum=%d",d);
            break;
case '-': d=b-c;
            printf("sum=%d",d);
            break;
case '*': d=b*c;
            printf("sum=%d",d);
            break;
case '/': d=b/c;
            printf("sum=%d",d);
            break;
   }
   }
