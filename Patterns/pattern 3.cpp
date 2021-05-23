#include <stdio.h>
int main()
{
    int i, sp, r, k=0,n;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    for(i=1; i<=r; i++)
    { 
	 k=0;
	 
        for(sp=1; sp<=r-i; sp++)
        {
            printf("  ");
        }
        n=2*i-1;
        while(k != n)
        {
        	
        	if(k%2 !=0)
        	{
        		 printf("A ");
			}
			else
            printf("* ");
            k++;
        }
        printf("\n");
    }
    
    return 0;
}
