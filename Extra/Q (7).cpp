#include<stdio.h>
//Triplets in an array !
int main()
{
	int n,s,l=0;
	printf("Enter a number ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements:\n");
	for(int i=0; i<n;i++)
	scanf("%d",&a[i]);
	printf("\nEnter the sum");
	scanf("%d",&s);
	for(int i=0; i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if((a[i]+a[j]+a[k])==s)
				{
				printf("(%d %d %d)",a[i],a[j],a[k]);
				l=1;
			    }
				
			}
		}
	}
	if(l==0)
	printf("NO TRIPLETS");
	return 0;
}
