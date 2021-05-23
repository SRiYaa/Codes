#include <stdio.h>
int main()
{
    int r, coef = 1, sp, i, j;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    for(i=0; i<r; i++)
    {
        for(sp=1; sp <= r-i; sp++)
            printf("  ");
        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;
            printf("   %d", coef);
        }
        printf("\n");
    }
    return 0;
}


