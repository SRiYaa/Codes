#include<stdio.h>
int main()
{
	//SR flipflop
	int s,r,qt;
	printf("Enter 3 inputs for SR flipflop \n");
	scanf("%d %d %d" ,&s ,&r ,&qt);
	     if(s==0 && r==0 && qt==0)
	printf("Next Stage = 0");
	else if(s==0 && r==0 && qt==1)
	printf("Next Stage = 1");
	else if(s==0 && r==1 && qt==0)
	printf("Next Stage = 0");
	else if(s==0 && r==1 && qt==1)
	printf("Next Stage = 0");
	else if(s==1 && r==0 && qt==0)
	printf("Next Stage = 1");
	else if(s==1 && r==0 && qt==1)
	printf("Next Stage = 1");
	else if(s==1 && r==1 && qt==0)
	printf("Next Stage = undefined");
	else 
	printf("Next Stage = undefined");
	
	printf("\n");
	
	//JK flipflop
	printf("Enter 3 inputs for JK flipflop \n");
	scanf("%d %d %d" ,&s ,&r ,&qt);
	     if(s==0 && r==0 && qt==0)
	printf("Next Stage = 0");
	else if(s==0 && r==0 && qt==1)
	printf("Next Stage = 1");
	else if(s==0 && r==1 && qt==0)
	printf("Next Stage = 0");
	else if(s==0 && r==1 && qt==1)
	printf("Next Stage = 0");
	else if(s==1 && r==0 && qt==0)
	printf("Next Stage = 1");
	else if(s==1 && r==0 && qt==1)
	printf("Next Stage = 1");
	else if(s==1 && r==1 && qt==0)
	printf("Next Stage = 1");
	else 
	printf("Next Stage = 0");
	
	printf("\n");
	
	//D flipflop
	printf("Enter a input for D flipflop \n");
	scanf("%d",&s);
	if(s==0)
	printf("Next Stage = 0");
	else 
	printf("Next Stage = 1");
	
	printf("\n");
	
	//T flipflop
	printf("Enter 2 inputs for T flipflop \n");
	scanf("%d %d" ,&s ,&qt);
	     if(s==0 && qt==0)
	printf("Next Stage = 0");
	else if(s==0 && qt==1)
	printf("Next Stage = 1");
	else if(s==1 && qt==0)
	printf("Next Stage = 1");
	else 
	printf("Next Stage = 0");
	return 0;
}
