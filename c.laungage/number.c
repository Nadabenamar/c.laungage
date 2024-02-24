#include <stdio.h>
void number(int x)
{
    if (x % 2 == 0)
    {
        printf("The number is even \n");
    }
    else
    {
        printf("the number is odd \n");
    }
}
void Number(int x)
{
    if (x  == 0)
    {
        printf("The number is even \n");
    }
    else if (x == 1)
    {
        printf("the number is odd \n ");
    }
 Number(x-2);
}
int main()
{
    int x;
    printf("Enter the number of x :");
    scanf("%d", &x);
    printf("using iterative:");
    number(x);
    printf("using recursive :");
    Number(x-2);


    return 0;
}