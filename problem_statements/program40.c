// problem on string :

#include <stdio.h>

int display(char *ch)
{
    int iCnt = 0;
    while (*ch != 0)
    {
        printf("%c\t", *ch);
        iCnt++;
        ch++;
    }
    printf("\n");

    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = display(Arr);
    printf("The count is : %d\n", iRet);

    return 0;
}