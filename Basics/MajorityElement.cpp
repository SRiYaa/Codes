#include<stdio.h>
int main()
{
	int n,b=0,c=0;
	printf("Enter the size of array ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		b=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			b++;
		}
		if(b>(n/2))
		{
			printf("The Majority Element is %d",a[i]);
			c=1;
			break;
		}
		
	}
	if(c==0)
	printf("There is No Majority Element");
	return 0;	
}
