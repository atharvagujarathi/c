// PROBLEMS ON N NUMBERS

#include <stdio.h>
#include <stdlib.h>

void display(int *Arr, int iNo)
{
    printf("Entered numbers are : \n");
    for (int i = 0; i < iNo; i++)
    {
        printf("%d\t", *Arr);
        *Arr++;
    }
    printf("\n");
}

int displayAddition(int ptr[], int iSize)
{
    int i = 0;
    int iAdd = 0;

    for (i = 0; i < iSize; i++)
    {
        iAdd = iAdd + ptr[i];
    }
    return iAdd;
}

void displayEven(int ptr[], int iSize)
{
    int i = 0;

    printf("even elements are, \n");
    for (i = 0; i < iSize; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            printf("%d\t", ptr[i]);
        }
    }
    printf("\n");
}

int max(int ptr[], int iSize)
{
    int i = 0;
    int iMax = 0;

    for (i = 0; i < iSize; i++)
    {
        if (iMax < ptr[i])
        {
            iMax = ptr[i];
        }
    }
    printf("\n");

    return iMax;
}

int reverse(int Arr[], int iSize)
{
    int i = 0;
    for (i = iSize - 1; i >= 0; i--)
    {
        printf("%d\t", Arr[i]);
    }
}

int main()
{
    int *Arr = NULL;
    int iLengh = 0;
    int iRet = 0;
    int iRet1 = 0;

    printf("Enter the number that you want to exactly put : \n");
    scanf("%d", &iLengh);

    Arr = (int *)malloc(iLengh * sizeof(int));

    printf("Enter the numbers : \n");
    for (int i = 0; i < iLengh; i++)
    {
        scanf("%d", &Arr[i]);
    }

    display(Arr, iLengh);

    iRet = displayAddition(Arr, iLengh);
    printf("The addition of the array is, %d: \n", iRet);

    displayEven(Arr, iLengh);

    iRet1 = max(Arr, iLengh);
    printf("The Maximum element of the array is, %d: \n", iRet1);

    printf("the reverse arrray is : \n");

    reverse(Arr, iLengh);

    free(Arr);
    return 0;
}