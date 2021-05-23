#include <stdio.h>
int main()
{
    float a=1, n,r,num,R,b=1;
    printf("Enter n and r");
    scanf("%f %f",& n, &r);
    num=n;
    R=r;
    while(R!=0)
    {
    	a = a*num/R;
    	num--;
    	R--;
    	
    }
     printf("Combination is %f \n", a);
	num=n;
    R=r;
    while(r!=0)
    {
    	b=b*r;
    	r--;
	}
    a=a*b;
    printf("Permutation is %f", a);
    return 0;
}
