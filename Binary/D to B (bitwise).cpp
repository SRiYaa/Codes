// WAP to convert Decimal to Binary using bitwise operator

#include <stdio.h>
int main()
{
    int n,c,k;
    printf("Enter a number ");
    scanf("%d",& n);
    for(c=7;c>=0;c--)
    {
    	k=n>>c;
    	if (k&1)
    	{printf("1");}
    	else
    	{printf("0");}
	}

    return 0;
}

