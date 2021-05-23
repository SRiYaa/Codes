#include<stdio.h>
int main()
{
	int n,num,c=0;
	printf("Enter the size of array ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in sorted manner\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the number whose ceil & floor you want to find \n ");
	scanf("%d",&num);
	for(int i=0;i<n-1;i++)
	{
			if(num< a[i])
			{
				printf("Ceil is %d\n",a[i-1]);
				printf("Floor is %d",a[i]);
				break;
			}
			else if(num==a[i])
			{
				printf("Ceil is %d\n",a[i-1]);
				printf("Floor is %d",a[i+1]);
				break;
			}
	}
	return 0;
}
