#include<stdio.h>
// Largest Palindrome Number
int main()
{
	int n,b,r=0,max,i;
	printf("Enter a number ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements:\n");
	for(int i=0; i<n;i++)
	scanf("%d",&a[i]);
	for(i=0; i<n;i++) 
	{
		int s= a[i];
		while(s!=0)
		{
			b=s%10;
			r=r*10+b;
			s=s/10;
		}
		if(r==a[i])
		{
			max= a[i];
			break;
		}
		r=0;
	}
	r=0;
	for(int j=i; j<n;j++) 
	{
		int s= a[j];
		while(s!=0)
		{
			b=s%10;
			r=r*10+b;
			s=s/10;
		}
		if(r==a[j])
		{
			if(a[j]>max)
			max=a[j];
		}
		r=0;
	}
	printf("\nThe largest palindrome= %d",max);
	
	printf("enter number= 3");
	printf("\nappa");
	printf("\nbppa");
	printf("\ncpppc");
	printf("\nThe largest palindrome= ncpppc");
	return 0;
}
