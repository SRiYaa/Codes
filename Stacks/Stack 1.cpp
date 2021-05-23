#include<stdio.h>
//Stack Operations (pop push display exit)
int stack[20],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("Enter the size of stack:");
    scanf("%d",&n);
    printf("\nSTACK OPERATIONS");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    do
    {
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\nThank You !");
                break;
            }
            default:
            printf ("\nPlease Enter a Valid Choice(1/2/3/4)");         
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    printf("\nOverflow Condition");
    else
    {
        printf("Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    printf("\nUnderflow Condition");
    else
    {
        printf("\nThe popped element is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\nThe elements are");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
    printf("\nEmpty Stack");
}
