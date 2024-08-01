// PROBLEMS ON PATTERN PRINTING
// output :  1 2 3 4
//           1 2 3 4
//           1 2 3 4

#include <stdio.h>

void pattern(int iRow, int iCol)
{
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter the Cols : \n");
    scanf("%d", &iValue2);

    pattern(iValue1, iValue2);

    return 0;
}