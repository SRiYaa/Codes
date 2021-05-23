#include <stdio.h>

int main()
{
	
	//AASF assignment 1
	
    int num, i,j,k;
    printf("enter the number of rows ");
    scanf("%d",& num);
    
    for(i=num; i>=1 ; i--)
    {
        for(j=1; j <= i; j++)
        {printf("* ");}
        for(k=num; k<i; k--)
        {printf("   ");}
        for(j=1; j <= i; j++)
        {printf("* ");}
        printf("\n");
        num--;
    }
    return 0;
}
