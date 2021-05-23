#include <stdio.h>
int main()
{
	int n,f1=0,f2=0;
	printf("Enter a number ");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
	{
		for(int j=2; j<i;j++)
		{
			if(i%j==0)
			f1=1;
		}
		for(int j=2; j<(n-i);j++)
		{
			if((n-i)%j==0)
			f2=1;
		}
		if(f1==0 && f2==0)
		printf("%d+%d ", i,(n-i));
		
		f1=0,f2=0;
		
	}
	return 0;
}
