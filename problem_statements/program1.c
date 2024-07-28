// additionn of two numbers :

#include <stdio.h>

int addition(int iNo1, int iNo2)
{
    int Ans = 0;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number : \n");
    scanf("%d", &iValue1);

    printf("Enter Second Number : \n");
    scanf("%d", &iValue2);

    iRet = addition(iValue1, iValue2);
    printf("The Addition of two numbers is : %d\n", iRet);
}