#include<stdio.h>
int ones(int n);
int twos(int n);
int sum(int b1,int b2);
int a[5],numa[5],numb[5],c[5],diff[5]={0},b[5];
int main ()
{
	int n,b1,b2;
	printf("Enter the 5 bit binary number (1s) ");
	scanf("%d",&n);
    printf("One's complement :- ");
    ones(n);
    printf("Two's complement :- ");
    twos(n);
    printf("Enter two 5 bit numbers for addition :- ");
    scanf("%d %d ", &b1 ,&b2);
    for(int k=4;k>=0;k--)
	{
	b[k]=b1%10;
	c[k]=b2%10;
	b1=b1/10;
	b2=b2/10;
    }
    sum(b[0],c[0]);
    printf("Enter two 5 bit numbers for subtraction :- ");
    scanf("%d %d ", &b1 ,&b2);
    for(int k=4;k>=0;k--)
	{
	b[k]=b1%10;
	b1=b1/10;
    }
    int r=twos(b2);
    sum(b,r);
}
int ones(int n)
{
	for(int i=4;i>=0;i--)
	{
		if(n%10==0)
		a[i]=1;
		else
		a[i]=0;
		n=n/10;
	}
	for(int i=0;i<5;i++)
	printf("%d",a[i]);
	printf("\n");
}
int twos(int n)
{
	int i;
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
	//printf("Two's Complement ")
	for(int i=0;i<5;i++)
	printf("%d",a[i]);
	return a;
}
int sum(int numa,int numb);
{
	int c;
	for(int i = 4; i >= 0; i--){
        sum[i] = numa[i]+ numb[i] + c;
        if(sum[i]>=2)
        c = 1;
        else
        c = 0;
        sum[i] = sum[i]%2;     }
    printf("\nSum is: ");
    for(int i = 0; i<5; i++)
        printf("%d",sum[i]);        
}
