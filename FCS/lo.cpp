#include<stdio.h>
int main()
{
	int a;
    printf("Enter ");
    scanf("%d",&a);
	int i,sum=0;
	for( i=0; i<a; i++)
	{
		if(a%i==0)
		sum=sum+i;
		//a=a/i;
	}
	if(a==sum)
	printf("Number is Perfect");
	else
	printf("Number is not Perfect");
	return 0;	
}
