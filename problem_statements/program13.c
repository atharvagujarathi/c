// Display the digits separately and keep the count.

#include <stdio.h>

void sepDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;
        printf("%d\t\n", iDigit);
        iNo = iNo / 10;
        sepDigit(iNo);
    }

    printf("%d\n", iCount);
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    sepDigit(iValue);

    return 0;
}