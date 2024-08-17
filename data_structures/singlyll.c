#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void insertAtFirst(PPNODE First, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void display(PNODE First)
{
    while (First != NULL)
    {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("\n");
}

int count(PNODE First)
{
    int iCnt = 0;
    while (First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

void deleteAtFirst(PPNODE First)
{
    if (*First == NULL)
    {
        printf("Linked list is empty");
    }
    else if ((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        PNODE temp = *First;
        *First = (*First)->next;
        free(temp);
    }
}

void insertAtLast(PPNODE First, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        PNODE temp = *First;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void deleteAtLast(PPNODE First)
{
    if (*First == NULL)
    {
        printf("Linked list is empty");
    }
    else if ((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        PNODE temp = *First;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void insertAtPos(PPNODE First, int iPos, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    int iLength = count(*First);

    if ((iPos < 1) && (iPos > iLength + 1))
    {
        printf("Invalid Position\n");
    }

    if (iPos == 1)
    {
        insertAtFirst(First, iNo);
    }
    else if (iPos == iLength + 1)
    {
        insertAtLast(First, iNo);
    }
    else
    {
        PNODE temp = *First;
        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void deleteAtPos(PPNODE First, int iPos)
{
    int iLength = count(*First);

    if ((iPos < 1) && (iPos > iLength))
    {
        printf("Invalid Position\n");
    }

    if (iPos == 1)
    {
        deleteAtFirst(First);
    }
    else if (iPos == iLength)
    {
        deleteAtLast(First);
    }
    else
    {
        PNODE temp1 = *First;
        PNODE temp2 = NULL;
        for (int i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }
}

int main()
{

    PNODE Head = NULL;
    int iRet = 0;

    insertAtFirst(&Head, 11);
    insertAtFirst(&Head, 21);
    insertAtFirst(&Head, 51);

    display(Head);
    iRet = count(Head);
    printf("The count is : %d\n", iRet);

    insertAtLast(&Head, 101);
    insertAtLast(&Head, 201);
    insertAtLast(&Head, 501);

    display(Head);
    iRet = count(Head);
    printf("The count is : %d\n", iRet);

    // deleteAtFirst(&Head);

    // display(Head);
    // iRet = count(Head);
    // printf("The count is : %d\n", iRet);

    // deleteAtLast(&Head);

    // display(Head);
    // iRet = count(Head);
    // printf("The count is : %d\n", iRet);

    // insertAtPos(&Head, 3, 1111);

    // display(Head);
    // iRet = count(Head);
    // printf("The count is : %d\n", iRet);

    deleteAtPos(&Head, 3);

    display(Head);
    iRet = count(Head);
    printf("The count is : %d\n", iRet);

    return 0;
}