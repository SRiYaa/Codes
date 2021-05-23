#include <stdio.h>
#include <math.h>
// Addition & Subtraction
int c = 0,numa[5]={0},numb[5]={0},diff[5]={0},sum[5]={0};
void add();
void sub();
int main()
{
    int ch;
    do{
    for(int i=0; i<5; i++)
	{
    numa[i] = 0;
    numb[i] = 0;
    diff[i] = 0;
    sum[i] = 0;
    }
    c = 0;
    printf("\n1.ADD\n2.SUBTRACT\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1: add();
                break;
        case 2: sub();
                break;
        default: printf("\nInvalid Choice: ");
              }
    printf("\nPress 1 to Continue...");
    scanf("%d",&ch);
    }while(ch == 1);
}
void add()
{
    printf("\nEnter two 5-bit binary numbers\n");
    printf("\nEnter first number: ");
    for(int i = 0; i<5; i++)
        scanf("%d",&numa[i]);
    printf("\nEnter second number: ");
    for(int i = 0; i<5; i++)
        scanf("%d",&numb[i]);
    for(int i = 4; i >= 0; i--){
        sum[i] = numa[i]+ numb[i] + c;
        if(sum[i]>=2)
        c = 1;
        else
        c = 0;
        sum[i] = sum[i]%2;     }
    printf("\nSum is: ");
    for(int i = 0; i<5; i++)
        printf("%d",sum[i]);            
}
void sub()
{
    printf("\nEnter two 5-bit binary numbers\n");
    printf("\nEnter first number: ");
    for(int i = 0; i<5; i++)
        scanf("%d",&numa[i]);
    printf("\nEnter second number: ");
    for(int i = 0; i<5; i++)
        scanf("%d",&numb[i]);
    for(int i = 4; i >= 0; i--){
        diff[i] = numa[i] - numb[i];
        if(diff[i] < 0)
            numa[i-1] = numa[i-1] - 1;
        diff[i] = fabs(diff[i]%2); }
    printf("\nDifference is: ");
    for(int i = 0; i<5; i++)
        printf("%d",diff[i]);
            
}
