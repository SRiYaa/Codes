#include <stdio.h>
#include <math.h>

int Prime(int N);
int Factorial(int N);
int Fibonacci(int N);
int Armstrong(int N, int M);

int main ()
{
	int N,M;
	    
    printf("Enter a number to check if it is prime or not. ");
    scanf("%d",& N);
    Prime(N);
    
	printf("\nEnter a number for it's factorial ");
	scanf("%d",& N);
	Factorial(N);
     
	printf("\nEnter a number for fibonacci series ");
    scanf("%d",& N);
    Fibonacci(N);
     
    printf("\nEnter range for armstong number ");
    scanf("%d %d",& N,M);
    Armstrong(N,M);
    
    /*printf("Enter range for strong number ");
    scanf("%d %d",& N,M); */
    
    return 0;
}
    
int Prime(int N)
{
	int a=0;
  for(int i=2; i<N; i++)
  {
  	if(N%i==0)
  	{
	  a=1;
	  break;
  	}	
  }
  if(a!=1)
  printf("The number entered is prime");
  else
   printf("The number entered is not prime");
   
   return 0;
}
    
int Factorial(int N)   
{
	int f=1;
	for(int i=1; i<=N ; i++)
	{
		f=f*i;
	}
	printf("THE ANS IS %d",f);
	return 0;
} 

int Fibonacci(int N)
{
	printf("0 1 ");
	int a=0,b=1,i,c;
	for(i=3;i<=N;i++)
	{
	c=a+b;
	printf("%d ",c);
	a=b;
	b=c;
	}
	return 0;
}
    
int Armstrong(int N, int M)
{
	int b=0;

   for (int a=N ;a<=M; a++)
   {
   	   N=a; 
   	   b=0;
   	   while(N!=0)
   	   {
		int c= N%10;
        b= b+ pow(c , 3) ;
        N=N/10;
       }
       if(b==a)
       {
       	printf("%d ",b);
	   }
   }
    return 0;
}

