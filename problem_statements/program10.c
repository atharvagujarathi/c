// Display the number of factors

#include <stdio.h>
#include <stdbool.h>

void checkFactors(int iNo)
{
    for (int i = 2; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    checkFactors(iValue);
}