#include <stdio.h>
int main ()
{
    printf("enter a number ");
    int n;
    scanf("%d",& n);
   int i,j,num=n,k;
   for(j=n;j>=1;j--)
   {
   
    for ( i=1;i<num;i++)
   {
       printf("  " );
   }
   for (k=num;k<=n;k++)
    printf("* " );
   num--;
    printf("\n");
   }

    return 0;
}
   
