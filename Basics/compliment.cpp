#include <stdio.h>
#include <math.h>
int main()
{
    long n;
    printf("Enter a binary number ");
    scanf("%ld", &n);
    while (n!=0)
    {
    	if(n%10==1)
    	printf("0");
    	else
    	printf("1");
    	n=n/10;
		
	}
	return 0;
}

