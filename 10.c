#include<stdio.h>
int main()
{
  int a,n=0,p=0,z=0,i=1,m;
  char d;
  do
 {
     printf("enter a number");
     scanf("%d",&m);
     if(m>0)
     {
       p++;
      }
     else if(m<0)
     {
        n++;
      }
     else
     {
        z++;
      } 
     i++;
     printf("do you wish to give more inputs,ENTER y for yes AND N FOR NO");
     scanf(" %c",&d);
     if(d=='n'||d=='N')
     break;
  }while(d=='y'||d=='Y');
    printf("%d postive numbers %d negative number %d zero",p,n,z);
}
