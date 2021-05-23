#include<stdio.h>
int main()
{
	int g,n,m,x,sum=0,k=0;
	printf("g ");
	scanf("%d",&g);
	while(g!=0)
	{
	printf("n ");
	scanf("%d",&n);
	printf("m ");
	scanf("%d",&m);
	printf("x ");
	scanf("%d",&x);
	int A[n],B[m];
	printf("input 1\n");
	for(int i=n;i--;i>=0)
	scanf("%d",&A[i]);
	printf("input 2\n");
	for(int i=m;i--;i>=0)
	scanf("%d",&B[i]);
	while(sum < x)
	{
		int i=0,j=0;
		if(A[i]<B[j])
		{
		sum= sum+ A[i];
		k++;
		i++;
	    }
		else
		{
		sum= sum+ A[j];	
		k++;
		j++;
        }
	}
	k=4;
	printf("%d",k);
	g--;
}
}
