// Swapping the numbers

#include <stdio.h>

void swap(int *iNo1, int *iNo2)
{
    int temp = 0;
    temp = *iNo1;
    *iNo1 = *iNo2;
    *iNo2 = temp;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the First value : \n");
    scanf("%d", &iValue1);

    printf("Enter the Second value : \n");
    scanf("%d", &iValue2);

    printf("The First Value and Last Value before swap are : %d & %d\n", iValue1, iValue2);

    swap(&iValue1, &iValue2);

    printf("The First Value and Last Value after swap are : %d & %d\n", iValue1, iValue2);

    return 0;
}