#include <stdio.h>    //practice of functions
int square(int y);   //function prototype (need not write this if the function is written before main funcction)
int cube(int z);     //function prototype
int main()
{
	int x=10;
	printf("%d\n",square(x));
	printf("%d",cube(x));
	return 0;
}

int square(int y)  // can use int y in both square & cube ...since variable y's domain is only in the brackets
{
	return y*y;
}
int cube(int z)
{
	return z*z*z;
}


