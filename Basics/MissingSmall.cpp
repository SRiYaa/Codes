#include<stdio.h>
int main()
{
	int n,c=0;
	printf("Enter the size of array ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in sorted manner\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1] != a[i]+1)
		{
			printf("The Missing Smallest Element is %d",(a[i]+1));
			c=1;
			break;
		}
	}
	if(c==0)
	printf("No Small Element is Missing");
}
