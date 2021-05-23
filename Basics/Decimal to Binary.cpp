#include <stdio.h>
int main()
{
    int i=1, num, b,total=0;
    printf("Enter a number");
    scanf("%d",& num);
    while(num !=0)
    {
        b= num%2;
    	total = total+ b*i;
    	i*= 10;
    	num=num/2;
	}
	printf("%d",total);
    
    return 0;
}

