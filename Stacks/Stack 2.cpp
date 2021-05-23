#include<stdio.h>
//Without Recursion
int a[5];
int main()
{
	int n;
	int b[5];
	printf("Enter the 5 elements of stack\n");
	for(int i=4;i>=0;i--)
	scanf("%d",&a[i]);
	printf("displaying stack\n");
	for(int i=0;i<5;i++)
	printf("%d\n",a[i]);
	printf("\nReversed Stack Without Recursion \n");	
    for(int i=0;i<5;i++)
    b[i]=a[4-i];
    for(int i=0;i<5;i++)
    printf("%d\n",b[i]);
	return 0;
}

