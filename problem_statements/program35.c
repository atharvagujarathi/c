// PROBLEMS ON N NUMBERS

#include <stdio.h>
#include <stdlib.h>

void display(int Arr[], int iNo)
{
    printf("Entered numbers are : \n");
    for (int i = 0; i < iNo; i++)
    {
        printf("%d\t", Arr[i]);
    }
}

int main()
{
    int *Arr = NULL;
    int iLengh = 0;

    printf("Enter the number that you want to exactly put \n");
    scanf("%d", &iLengh);

    Arr = (int *)malloc(iLengh * sizeof(int));

    printf("Enter the numbers : \n");
    for (int i = 0; i < iLengh; i++)
    {
        scanf("%d", &Arr[i]);
    }

    display(Arr, iLengh);

    return 0;
}