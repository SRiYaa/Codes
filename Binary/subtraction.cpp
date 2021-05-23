#include <stdio.h>
int main()
{
    long b1, b2=0,b,k;
    int a[5];
    int i = 0, remainder = 0, sum[6];
    printf("Enter the first binary number: ");
    scanf("%ld", &b1);
    printf("Enter the second binary number: ");
    scanf("%ld", &b);
    for(k=4;k>=0;k--)
	{
		if(b%10==0)
		{a[k]=0;
		b=b/10;}
		else
		{a[k]=1;
		b=b/10;
		break;}
	}
	for(int j=k-1; j>=0;j--)
	{
		if(b%10==0)
		a[j]=1;
		else
		a[j]=0;
		b=b/10;
	}
	for(int j=0;j<5;j++)
	{
		b2= b2*10+(a[j]);
	}
	printf("2's complement %d",b2);
    while (b1 != 0 || b2 != 0)
    {
        sum[i++] =(b1 % 10 + b2 % 10 + remainder) % 2;
        remainder =(b1 % 10 + b2 % 10 + remainder) / 2;
        b1 = b1 / 10;
        b2 = b2 / 10;
    }
    if (remainder != 0)
    sum[i++] = remainder;
    --i;
    printf("\nDifference of two binary numbers: ");
    while (i>= 0)
    printf("%d", sum[i--]);
    
    return 0;
}
	
