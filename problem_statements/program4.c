// check the student is pass or not :

#include <stdio.h>
#include <stdbool.h>

bool checkPercentage(int iNo)
{
    if ((iNo > 1) && (iNo < 35))
    {
        return false;
    }
    else if ((iNo >= 35) && (iNo <= 100))
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Percentage : \n");
    scanf("%d", &iValue);

    bRet = checkPercentage(iValue);
    if (bRet == true)
    {
        printf("Student is Pass\n");
    }
    else
    {
        printf("Student is Fail\n");
    }

    return 0;
}