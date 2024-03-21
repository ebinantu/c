#include<stdio.h>
void check(int a);
int main()
{
  int a;
  printf("enter the number:");
  scanf("%d",&a);
  check(a);
}

void check(int a)
{ 
   if(a%2==0)
   printf("number is even");
   else
   printf("number is odd");
}
