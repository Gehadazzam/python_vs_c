#include <stdio.h>
void check_number(int num)
{
    if (num % 2 == 0)
        printf("%d is even number\n", num);
    else
        printf("%d is odd number\n", num);
}

int main()
{
    check_number(10);
    return(0);
}