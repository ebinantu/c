#include <stdio.h>
#include <math.h>
main()
{
  int a,b,c,x1,x2,d;
  printf("ax^2+bx+c\n");
  printf("Enter the values for a,b,c:");
  scanf("%d\n%d\n%d",&a,&b,&c);
  d=(b*b)-(4*a*c);
  if(d==0)
  {
     x1=-b/(2*a);
     printf("answer=%d",x1);
   }
    else
   {
     if(d>0)
   { 
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf(" values of x is :%d,%d",x1,x2);
         }
    else
     {
    printf("the number is imaginary");
 
    
   }
    
 }
    
    
}
