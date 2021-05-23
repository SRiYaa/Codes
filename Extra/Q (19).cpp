#include <stdio.h>
#include <math.h>
int main()
{
	int n,p,f=0,X;
//	while(1)
	printf("1.Check whether the given number is Prime or not  \n2.Print the first 'n' numbers of a Fibonacci series\n");
	printf("3.Check whether the given number is palindrome or not \n4.Divide the given number 'X' by 2^n \n\n");
	printf("Enter your choice from 1,2,3,4 - ");
	scanf("%d",&n);
	switch(n)
	{
		case 0 : break;
		case 1 : 
		          printf("\nEnter a number ");
		          scanf("%d",& p);
		          for(int i=2;i<p;i++)
		          {
		          	if(p%i==0)
		          	{
		          		f=1;
		          		break;
					}
				  }
				  if(f==0)
				  printf("The given number is prime\n");
				  else
				  printf("The given number is not prime\n");
				  break;
		        //  printf("If you would like to continue press 1 else press 0 ");
		        // scanf("%d",& a);
		        //  if(a==0)
		        //  break;
		case 2 :
			      printf("\nEnter a number ");
		          scanf("%d",& p);
		          if(p==1)
		          printf("0 ");
		          else if(p==2)
		          printf("0 1 ");
				  else
				  {
				  printf ("0 1 ");
				  int a=0,b=1,c;
				  for(int i=3;i<=p;i++)
				  {
				  	c=a+b;
				  	a=b;
				  	b=c;
				  	printf("%d ",c);
				  }
			      }
			      break;
			      
		case 3 :
			      int p1,rem,rev=0,g=0;
			      printf("\nEnter a number ");
		          scanf("%d",& p);
		          p1=p;
		          while(p!=0)
		          {
		          	p=p/10;
		          	g++;
				  }
				  p=p1;
		          while(g!=0)
		          {
		          	rem=p%10;
		          	rev=rev+ pow(10,g-1)*rem;
		          	g--;
		          	p=p/10;
				  }
				  //printf("%d",rev);
				  if(rev==p1)
				  printf("The given number is palindrome\n");
				  else
				  printf("The given number is not palindrome\n");
				  break;
				  
		//case 4 :
		        //  printf("\nEnter a number X & n ");
		       //  scanf("%d",& X, &n );	  
		        // X>
		                         
		         
	//	default : printf("Not a correct input");
	
	}
	return 0;
}
