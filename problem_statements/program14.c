// Display the digits separately and keep the count and make it reverse.

#include <stdio.h>

int reverse(int iNo)
{
    int iDigit = 0;
    int iRevese = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRevese = (iRevese * 10) + iDigit;
        iNo = iNo / 10;
    }

    return iRevese;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    iRet = reverse(iValue);
    printf("The reverse number is, %d", iRet);

    return 0;
}