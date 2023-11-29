#include <stdio.h>
int sum_of_array(int array[])
{
    int i = 0, total = 0;
    while (array[i] != '\0')
    {
        total += array[i];
        i++;
    }
    return (total);
}
int main()
{
    int array[] = {1, -1, 4, 3, 5};
    int sum = sum_of_array(array);
    printf("%d is the sum of your array", sum);
    return (0);
}