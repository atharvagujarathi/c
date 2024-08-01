// PROBLEMS ON PATTERN PRINTING
// input : 5
// output :  5 4 3 2 1

#include <stdio.h>

void pattern(int iNo)
{
    for (int i = iNo; i >= 1; i--)
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