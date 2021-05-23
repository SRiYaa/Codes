#include <stdio.h>

int main()
{
    int a=1, num, i,j;
    printf("enter the number of rows ");
    scanf("%d",& num);
    
    for(i=1; i <= num; i++)
    {
        for(j=1; j <= i; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
