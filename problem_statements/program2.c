// check whether the number is even or odd :

#include <stdio.h>
#include <stdbool.h>

bool checkEvenOdd(int iNo)
{
    bool bFlag = false;
    if (iNo % 2 == 0)
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = checkEvenOdd(iValue);
    if (bRet == true)
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is Odd\n");
    }

    return 0;
}