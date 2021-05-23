#include <stdio.h>
int main ()
{
    printf("enter a number ");
    int n;
    scanf("%d",& n);
   int i,j,num=n;
   for(j=1;j<=n;j++)
   {
   
    for ( i=1;i<=num;i++)
   {
       printf("%d ", i );
   }
   num--;
    printf("\n", i );
   }

    return 0;
}
   

