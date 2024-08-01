// PROBLEMS ON PATTERN PRINTING
// output :
// 1
// 1       2
// 1       2       3
// 1       2       3       4
// 1       2       3       4       5

#include <stdio.h>

void pattern(int iRow, int iCol)
{

    if (iRow != iCol)
    {
        printf("Row and Column should be same \n");
        return;
    }
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            if (i >= j)
            {
                printf("%d\t", j);
            }
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