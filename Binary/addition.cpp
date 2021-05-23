#include <stdio.h>
int main()
{
    int b1, b2;
    int i = 0, remainder = 0, sum[6];
    printf("Enter the first binary number: ");
    scanf("%d", &b1);
    printf("Enter the second binary number: ");
    scanf("%d", &b2);
    while (b1 != 0 || b2 != 0)
    {
        sum[i++] =(b1 % 10 + b2 % 10 + remainder) % 2;
        remainder =(b1 % 10 + b2 % 10 + remainder) / 2;
        b1 = b1 / 10;
        b2 = b2 / 10;
    }
    if (remainder != 0)
    sum[i++] = remainder;
    --i;
    printf("Sum of two binary numbers: ");
    while (i >= 0)
    printf("%d", sum[i--]);
    return 0;
}
