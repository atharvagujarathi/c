// PROBLEMS ON PATTERN PRINTING
// input : 5
// output :  -5 -4  -3  -2  -1 0  1 2 3 4 5

#include <stdio.h>

void pattern(int iNo)
{
    for (int i = -iNo; i <= iNo; i++)
    {
        printf("%d\t", i);
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