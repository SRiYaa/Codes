#include <stdio.h>
int main ()
{
    printf("enter a number or rows and columns ");
    int r,c;
    scanf("%d %d",&r ,&c);
    int a[r][c];
    int b[r][c];
    printf("\nEnter 1st matrix\n");
    for(int i=0;i<r;i++)
   {  
       for(int j=0;j<c;j++)
     {
     	scanf("%d",& a[i][j]);
     }
   }
   printf("\nEnter 2nd matrix\n");
   for(int i=0;i<r;i++)
   {  
       for(int j=0;j<c;j++)
     {
     	scanf("%d",& b[i][j]);
     }
   }
   for(int i=0;i<r;i++)
   {  
       for(int j=0;j<c;j++)
     {
     	a[i][j]=a[i][j] + b[i][j];
     }
   }
   printf("\n");
   for(int i=0;i<r;i++)
   {  
       for(int j=0;j<c;j++)
     {
     	printf("%d ", a[i][j]);
     }
     printf("\n");
   }
   return 0;
}
   
