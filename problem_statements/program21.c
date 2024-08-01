// PROBLEMS ON PATTERN PRINTING
// input : 5
// output :  A  B   C   D   E

#include <stdio.h>

void pattern(int iNo)
{
    char ch = '\0';
    for (int i = 1, ch = 'A'; i <= iNo; i++, ch++)
    {
        printf("%c\t", ch);
    }
}

int main()
{
    char iValue = 0;

    printf("Enter the value : \n");
    scanf("%d", &iValue);

    pattern(iValue);

    return 0;
}