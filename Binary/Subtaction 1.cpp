#include<stdio.h>
int c = 0,diff[5]={0};
int main ()
{
	int n,m,i;
	printf("Enter two 5 bit binary numbers for subtraction ");
	scanf("%d %d",&m ,&n);
	int b[5],a[5];
	for(int k=4;k>=0;k--)
	{
	b[k]=m%10;
	m=m/10;
    }
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
	for(int i = 4; i >= 0; i--)
	{
        diff[i] = a[i]+ b[i] + c;
        if(diff[i]>=2)
        c = 1;
        else
        c = 0;
        diff[i] = diff[i]%2;     }
    printf("\nDifference is: ");
    for(int i = 0; i<5; i++)
    printf("%d",diff[i]);     
	return 0;	
}
