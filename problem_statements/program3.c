// if number is in between 30 and 50 return yes otherwise false :

#include <stdio.h>

void range(int iNo)
{
    if ((iNo >= 30) && (iNo <= 50))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    range(iValue);

    return 0;
}