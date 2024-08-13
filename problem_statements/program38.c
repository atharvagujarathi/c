// swapping the array :

#include <stdio.h>
#include <stdlib.h>

void display(int *Arr, int iSize)
{
    printf("\nEntered Elements are : \n");
    for (int i = 0; i < iSize; i++)
    {
        printf("%d\t", Arr[i]);
    }
}

void reverse(int *Arr, int iSize)
{
    for (int i = 0; i < iSize; i++)
    {
        int iStart = 0;
        int iTemp = 0;
        int iEnd = iSize - 1;

        while (iStart < iEnd)
        {
            iTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = iTemp;

            iStart++;
            iEnd--;
        }
    }
}

int main()
{
    int *Arr = NULL;
    int iLength = 0;

    printf("Enter the number of elements that you want : \n");
    scanf("%d", &iLength);

    Arr = (int *)malloc(iLength * sizeof(int));

    printf("\nEnter the Elements : \n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d", &Arr[i]);
    }

    display(Arr, iLength);
    reverse(Arr, iLength);
    display(Arr, iLength);

    return 0;
}