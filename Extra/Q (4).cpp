#include<stdio.h>
// Use * operation using 2 & 3 to get all elents of array to be same
int main()
{
	int n,b=0;
	printf("Enter a number ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements:\n");
	for(int i=0; i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0; i<n;i++) 
	{
	    while(a[i]%2==0 || a[i]%3==0)
	    {
	    	if(a[i]%2==0)
	    	a[i]=a[i]/2;
	    	if(a[i]%3==0)
	    	a[i]=a[i]/3;
		}
	}
	for(int i=0; i<n;i++)
	{
	for(int j=0; j<n;j++)
	{
		if(a[i]!=a[j])
		{
			b=1;
			break;
		}
	}
	}
	if(b==0)
	printf("yes");
	else
	printf("no");


	return 0;
}

