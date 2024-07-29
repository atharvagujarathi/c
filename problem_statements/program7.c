// Problem Statement 0-4 = no ticket, 4-10 = 900rs, 10-50 = 2000rs, 50 <= 500

#include <stdio.h>

#define ret_free 1
#define ret_ninety 2
#define ret_fivehund 3
#define ret_twothou 4

int rangeTicket(int iNo)
{
    if ((iNo >= 0) && (iNo < 4))
    {
        return ret_free;
    }
    else if ((iNo >= 4) && (iNo < 10))
    {
        return ret_ninety;
    }
    else if ((iNo >= 10) && (iNo < 50))
    {
        return ret_twothou;
    }
    else if ((iNo >= 50) && (iNo <= 500))
    {
        return ret_fivehund;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    iRet = rangeTicket(iValue);
    if (iRet == 1)
    {
        printf("No Ticket\n");
    }
    else if (iRet == 2)
    {
        printf("900 Rs\n");
    }
    else if (iRet == 3)
    {
        printf("2000 Rs\n");
    }
    else if (iRet == 4)
    {
        printf("500 Rs\n");
    }

    return 0;
}