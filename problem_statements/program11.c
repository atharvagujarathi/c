// Display the number of factors and addition and count
// Time Complexity = O(N)

#include <stdio.h>

void checkFactors(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    for (int i = 2; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iCnt++;

            iSum = iSum + i;
        }
    }

    printf("The sum is %d and the count is %d \n", iSum, iCnt);
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    checkFactors(iValue);
}