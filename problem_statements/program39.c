// PROBLEMS ON STRING

#include <stdio.h>

void checkCapital(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("It is Capital \n");
    }
    else
    {
        printf("It is not Capital \n");
    }
}

int main()
{
    char ch;

    printf("Ente one character : \n");
    scanf("%c", &ch);
    checkCapital(ch);

    printf("Entered character is %c \n", ch);

    printf("ASCII value of that character is : %d \n", ch);

    return 0;
}