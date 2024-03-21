#include<stdio.h>
main()
{
   int A[10][10],B[10][10],C[10][10],i,j,r1,c1,r2,c2;
   printf("enter row and coloum for first matrix");
   scanf("%d %d",&r1,&c1);

   printf("enter row and coloum for second matrix");
   scanf("%d %d",&r2,&c2);

      if(r1==r2&&c1==c2)
         { 
            printf("enter the number s for matrix row wise");
             for(i=0;i<r1;i++)
             {
                for(j=0;j<c1;j++)
                {
                  scanf("%d",&A[i][j]);
                 }

              }
           
         printf("enter the number s for matrix row wise");
              for(i=0;i<r2;i++)
             {
                for(j=0;j<c2;j++)
                  scanf("%d",&B[i][j]);
                 
             }
        for(i=0;i<r1;i++)
        { 
           for(j=0;j<c2;j++)
           { 
            C[i][j]=A[i][j]+B[i][j];
            }
        }
       for(i=0;i<r1;i++)
        { 
           for(j=0;j<c2;j++)
           {
             printf("%d\t",C[i][j]);
           }
         printf("\n");
        }
       }
       else
       {
       printf("we cant add to matrix with different row and coloumn");
   }
   }
