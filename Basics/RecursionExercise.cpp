#include<stdio.h>
#include<stdlib.h>
/*int main()
{
	printf("C to it that C survives\n");
	main();
	return 0;
}
int main()
{
	int i=0;
	i++;
	if(i<=5)
	{
		printf("C adds wings to your thoughts\n");
		exit(0);
		main();
	}
	return 0;
}*/

//calculate sum of digits using recursion.
int sum(int);
int main()
{
	int n,s;
	printf("Enter a 5 digit positive no.");
	scanf("%d",&n);
	s=sum(n);
	printf("%d",s);
}

int sum(int n)
{
	int a;
	if(n!=0)
	a=n%10+ sum(n/10);
	else
	return 0;
	return a;
}
