// PROBLEMS ON PATTERN PRINTING
// input : 5
// output :  1 * 1  2 * 2 3 * 3 4 * 4 5 * 5

#include <stdio.h>

void pattern(int iNo)
{
    for (int i = 1; i <= iNo; i++)
    {
        printf("%d * %d\t", i, i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d", &iValue);

    pattern(iValue);

    return 0;
}