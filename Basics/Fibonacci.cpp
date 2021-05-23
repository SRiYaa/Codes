#include <stdio.h>
int main()
{
    int a=0, num, b=1,c;
    printf("Enter a number greater than 0: ");
    scanf("%d",& num);
    if(num==1)
     printf("0");
     else if(num==2)
     printf("01");
     else
     {
	 printf("%d %d",a,b);
    num=num-2;
	while(num !=0)
    {
c=a+b;
a=b;
b=c;
	printf(" %d", c );
	num--;
}
     }

    return 0;
}
