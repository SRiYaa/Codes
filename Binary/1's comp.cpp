#include<stdio.h>

int main ()
{
	int n;
	printf("Enter the 5 bit binary number (1s) ");
	scanf("%d",&n);
	int a[5];
	for(int i=4;i>=0;i--)
	{
		if(n%10==0)
		a[i]=1;
		else
		a[i]=0;
		n=n/10;
	}
	for(int i=0;i<5;i++)
	printf("%d",a[i]);
	printf("\n");
	printf("Enter the 5 bit binary number (2s) ");
	scanf("%d",&n);
	int i;
	for(i=4;i>=0;i--)
	{
		if(n%10==0)
		{a[i]=0;
		n=n/10;}
		else
		{a[i]=1;
		n=n/10;
		break;}
	}
	for(int j=i-1; j>=0;j--)
	{
		if(n%10==0)
		a[j]=1;
		else
		a[j]=0;
		n=n/10;
	}
	for(int i=0;i<5;i++)
	printf("%d",a[i]);
	return 0;	
}
