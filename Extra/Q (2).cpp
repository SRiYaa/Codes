#include <stdio.h>
int main ()
{
    printf("enter a number ");
    int n,b=0,c=0;
    scanf("%d",& n);
    int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",& a[i]);

   for(int i=0;i<n;i++)
   {
   	 b=0;
   	 if(a[i]!='\0');
   	 {		
   	 for(int j=0;j<n;j++)
   	 {
   	 	if(a[i]==a[j])
			b++;		
	 }
	 if(b==1)
	 printf("%d",a[i]);
	 if(b>1)
	 {
	 	for(int k=i+1;k<n;k++)
   	 {
   	 	if(a[i]==a[k])
			a[k]='\0';
	 }
	 if(a[i]!=0)
	 printf("%d",a[i]);
     }
	 }
   }
   return 0;
}
