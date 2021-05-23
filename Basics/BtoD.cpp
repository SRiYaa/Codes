#include <stdio.h>
#include <math.h>
int main()
{
	long Num;
	int D=0,last=0,i=0;
	printf("Enter a Binary Number (to decimal) ");
	scanf("%ld", & Num);
	while(Num!=0)
	{
		last=Num%10;
		D=D + last*pow(2,i);
		Num=Num/10;
		i++;
	}
	printf("%d",D);
	
	D=0,i=0;
	
	printf("\nEnter a Octal Number (to decimal) ");
	scanf("%d", & D);
	while(D!=0)
	{
		last=D%10;
		Num=Num + last*pow(8,i);
		D=D/10;
		i++;
	}
	printf("%d",Num);
	
	D=0,i=0,Num=0;
	
	printf("\nEnter a Decimal Number (to binary) ");
	scanf("%d", & D);
	while(D!=0)
	{
		last=D%2;
		Num=Num + last*pow(10,i);
		D=D/2;
		i++;
	}
	printf("%d",Num);
	
	D=0,i=0,Num=0;
	
	printf("\nEnter a Decimal Number (to octal) ");
	scanf("%d", & D);
	while(D!=0)
	{
		last=D%8;
		Num=Num + last*pow(10,i);
		D=D/8;
		i++;
	}
	printf("%d",Num);
	
	
	D=0,i=0,Num=0;
	
	printf("\nEnter a Binary Number (to octal) ");
    scanf("%ld", & Num);
	while(Num!=0)
	{
		last=Num%10;
		D=D + last*pow(2,i);
		Num=Num/10;
		i++;
	}
	i=0;
	while(D!=0)
	{
		last=D%8;
		Num=Num + last*pow(10,i);
		D=D/8;
		i++;
	}
	printf("%d",Num);
	
	D=0,i=0,Num=0;
	
	printf("\nEnter a Octal Number (to binary) ");
	scanf("%d", & D);
	while(D!=0)
	{
		last=D%10;
		Num=Num + last*pow(8,i);
		D=D/10;
		i++;
	}
	i=0;
	while(Num!=0)
	{
		last=Num%2;
		D=D + last*pow(10,i);
		Num=Num/2;
		i++;
	}
	printf("%d",D);

	return 0;
}


