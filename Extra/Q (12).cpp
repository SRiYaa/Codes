#include <stdio.h>
int main ()
{
    printf("1.\nEnter a \nNumber\n");
    printf("\n2.Sum of 3+9\n");
    
    int a=3,b=9;
    printf("%d ", a+b);
    printf("\n\n3.");
    
    scanf("%d %d", &a, &b);
    printf("%d ", a+b);
    printf("\n\n4.");
    
    scanf("%d", &a);                                 //iteration
    a>=30 ? printf("pass\n"): printf("fail\n");
    
    int i=2;
    switch (i)
    {
    	case 1 :
    	printf("I am in case 1");
    	break;
    	case 2 :
    	printf("I am in case 2 \n");
    	printf("I am in case 2.1 "); // No need for brackets, it will print all statements before break
    	break;
    	default:
    	printf("I am not in case");
    	
	}
	
	return 0;
}
