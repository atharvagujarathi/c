// check whether the number is factor of 4.

#include <stdio.h>
#include <stdbool.h>

bool checkFactor(int iNo)
{
    if (iNo % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    bRet = checkFactor(iValue);
    if (bRet == true)
    {
        printf("%d is the factor of 4\n", iValue);
    }
    else
    {
        printf("%d is NOT the factor of 4\n", iValue);
    }

    return 0;
}