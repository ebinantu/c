#include<stdio.h>
#include<string.h>
int main()
{
   char name[10][10],tem[10];
   int i,j,n;
   printf("enter the number of strings\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%s",name[i]);
    }
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
     { 
        if(strcmp(name[i],name[j])>0)
        { 
            strcpy(tem,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],tem);
         }
       }
   }
   for(i=0;i<n;i++)
   {
     printf("%s",name[i]);
    }
 }
