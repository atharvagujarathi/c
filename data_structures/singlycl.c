#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} NODE, *PNODE, **PPNODE;

void insertAtFirst(PPNODE First, PPNODE Last, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if (*First == NULL && *Last == NULL)
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void display(PNODE First, PNODE Last)
{
    if (First == NULL && Last == NULL)
    {
        return;
    }
    else
    {
        do
        {
            printf("|%d|->", First->data);
            First = First->next;
        } while (First != Last->next);
        printf("\n");
    }
}

int count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First->next;
    } while (First != Last->next);
    printf("\n");
    return iCnt++;
}

void insertAtLast(PPNODE First, PPNODE Last, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if (*First == NULL && *Last == NULL)
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
    }
    (*Last)->next = *First;
}

void deleteAtFirst(PPNODE First, PPNODE Last)
{
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    insertAtFirst(&Head, &Tail, 11);
    insertAtFirst(&Head, &Tail, 21);
    insertAtFirst(&Head, &Tail, 51);

    display(Head, Tail);
    iRet = count(Head, Tail);
    printf("The count is %d\n", iRet);

    insertAtLast(&Head, &Tail, 101);
    insertAtLast(&Head, &Tail, 201);
    insertAtLast(&Head, &Tail, 501);

    display(Head, Tail);
    iRet = count(Head, Tail);
    printf("The count is %d\n", iRet);

    return 0;
}