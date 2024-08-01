// PROBLEMS ON PATTERN PRINTING
// output :
// *       *       *       *       *
// $       $       $       $       $
// *       *       *       *       *
// $       $       $       $       $
// *       *       *       *       *

#include <stdio.h>

void pattern(int iRow, int iCol)
{
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            if (i % 2 == 0)
            {
                printf("$\t", i);
            }
            else
            {
                printf("*\t", i);
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