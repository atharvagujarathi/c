// Count the vowels

#include <stdio.h>
#include <stdbool.h>

int display(char *ch)
{
    int iCnt = 0;
    bool bFlag = false;
    while (*ch != 0)
    {
        if ((*ch == 'a') || (*ch == 'e') || (*ch == 'i') || (*ch == 'o') || (*ch == 'u'))
        {
            bFlag = true;
            break;
        }
        ch++;
    }
    printf("\n");

    return bFlag;
}

int main()
{
    char Arr[50];
    bool bRet = false;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    bRet = display(Arr);
    if (bRet == true)
    {
        printf("Vowel are present \n");
    }
    else
    {
        printf("Vowel are not present \n");
    }

    return 0;
}