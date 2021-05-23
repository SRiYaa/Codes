#include<stdio.h>
int main ()
{
	int n;
	printf("Enter the 1st 5 bit binary number ");
	int a[5];
	for(int i=0; i<5;i++)
	scanf("%d",&a[i]);
	printf("\nEnter the 2nd 5 bit binary number ");
	int b[5];
	for(int i=0; i<5;i++)
	scanf("%d",&b[i]);
	int c[6];
	c[0]=0;
	for(int i=4;i>=0;i--)
	{
		if(a[i]+b[i]==0)
		c[i+1]=0;
		else if(a[i]+b[i]==1)
		c[i+1]=1;
		else if(a[i]+b[i]==2)
		{c[i+1]=0;
		a[i-1]++;}
		else
		{c[i+1]=1;}
		//a[i-1]++;}	
		//if(i=0 && (a[i+1]+b[i+1]>1))
		//c[0]=1;
	}
	for(int i=1; i<6;i++)
	printf("%d",c[i]);
}
