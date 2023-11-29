#include <stdio.h>
int make_negative(int num)
{
    if (num > 0)
        return (-num);
    else
        return (num);
}

int main()
{
    int negative = make_negative(9);
    printf("%d", negative);
    return (0);
}