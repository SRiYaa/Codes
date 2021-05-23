#include <stdio.h>  
#include <math.h>  //practice of increment decrement, power function
int main()
{
	printf("for main % / lol");   // How to print % on screen ?????
	int c= pow(5,3);
	printf("%d\n",c);
	
	int a=1,b;
	printf("%d %d %d\n", a, ++a, a++);  // in printf statement argument is performed from right to left
	
	a=0, b=1;                           
	a= ++b + ++b;
	printf("%d\n",a);
	
	a=0, b=1;
	a= ++b + ++b + ++b;                 // in usual assignment statement, argument is from left to right
	printf("%d\n",a);
	
	a=0, b=1;
	a=++b + b++;
	printf("%d\n",a);
	
	// a=0, b=0;
	
//	a= b++ + b++ + b++;
//	a= ++b + ++b + ++b;
//	a= b++ + ++b + ++b;
	
	a=0, b=0;	
    a= b++ + ++b + ++b;
	printf("%d\n",a);
	
	a=10;
	b= ++a + ++a + ++a;
	printf("%d\n",b);
	
	a=0,b=0;
	printf("%d\n",++a);
	printf("%d\n",b++);
	
	return 0;
}
