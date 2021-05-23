#include <stdio.h>
int main ()
{
    printf("enter a number ");
    int n;
    scanf("%d",& n);
    n++;
   int i,j,num=n,k,l=1,a=1;
   for(j=0;j<n;j++)
   {  
    for ( i=1;i<num;i++)
      { printf("  " );}
    for(k=j;k>=0;k--)
      { printf("%d ",k); }
    for(a=1;a<=j;a++)  
     { printf("%d ",a); }
      num--;
    printf("\n");
   }
    return 0;
}
