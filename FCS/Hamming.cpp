#include<stdio.h>
#include<math.h>
int main()
{
	printf("Enter a 7 bit code\n");
	int arr[7];
	int a=0,p1=0,p2=0,p4=0;
	for(int i=0;i<7;i++)
	scanf("%d",&arr[i]);
	printf("\nAssume even parity");
	//for p1 -- 1,3,5,7
	for(int i=0;i<7;i++)
	{
		if(i%2==0)
		a=a+arr[i];
	}
	if(a%2 !=0)
	p1=1;
	a=0;
	printf("\n%d",p1);
	//for p2 -- 2,3,6,7
	for(int i=0;i<7;i++)
	{
		if(i==5 || i==4 || i==1 || i==0)
		a=a+arr[i];
	}
	if(a%2 !=0)
	p2=1;
	printf("\n%d",p2);
	a=0;
	//for p4 -- 4,5,6,7
	for(int i=0;i<4;i++)
	{
		a=a+arr[i];
	}
	if(a%2 !=0)
	p4=1;
	printf("\n%d",p4);
	if(p1==1 || p2==1 || p4==1)
	{
	printf("\ncode has error");
	int Num = p4*100 +p2*10 +p1*1;
	//printf(" %d",Num);
	int D=0,last=0,i=0;
	while(Num!=0)
	{
		last=Num%10;
		D=D + last*pow(2,i);
		Num=Num/10;
		i++;
	}
	printf("\nerror in %d position ",D);
	if(arr[7-D]==1)
	arr[7-D]=0;
	else
	arr[7-D]=1;
	for(int i=0;i<7;i++)
	printf("%d",arr[i]);
	}
	else
	printf("\ncode has no error");
	
	return 0;
}

