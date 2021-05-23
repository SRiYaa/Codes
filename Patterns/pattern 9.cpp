#include <stdio.h>
int main ()
{
    printf("enter a number ");
    int n;
    scanf("%d",& n);
   int i,j,num=n,k,a=1;
   for(j=1;j<=n;j++)
   {
   
    for ( i=1;i<num;i++)
   {
       printf("  " );
   }
  for(k=1;k<=(j*2);k++)
  {
  	if(k%2!=0)
  	 printf("%d", a);
  	 else
  	 printf("   " );
  }
  a++;
   num--;
    printf("\n");
   }

    return 0;
}
