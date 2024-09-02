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
    if (*First == NULL && *Last == NULL)
    {
        printf("Linked List is empty");
    }
    else if (*Last == *First)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
    }
}

void deleteAtLast(PPNODE First, PPNODE Last)
{
    if (*First == NULL && *Last == NULL)
    {
        printf("Linked List is empty");
    }
    else if (*Last == *First)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        PNODE temp = *First;
        while (temp->next != *Last)
        {
            temp = temp->next;
        }
        free(*Last);
        *Last = temp;
        (*Last)->next = *First;
    }
}

void insertAtPos(PPNODE First, PPNODE Last, int iPos, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    int iLength = 0;
    iLength = count(*First, *Last);

    if ((iPos < 1) && (iLength + 1 < iPos))
    {
        printf("Invalid Position");
    }

    if (iPos == 1)
    {
        insertAtFirst(First, Last, iNo);
    }
    else if (iPos == iLength + 1)
    {
        insertAtLast(First, Last, iNo);
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

void deleteAtPos(PPNODE First, PPNODE Last, int iPos)
{
    int iLength = 0;
    iLength = count(*First, *Last);

    if ((iPos < 1) && (iLength < iPos))
    {
        printf("Invalid Position");
    }

    if (iPos == 1)
    {
        deleteAtFirst(First, Last);
    }
    else if (iPos == iLength)
    {
        deleteAtLast(First, Last);
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

    insertAtPos(&Head, &Tail, 3, 1011);

    display(Head, Tail);
    iRet = count(Head, Tail);
    printf("The count is %d\n", iRet);

    // deleteAtPos(&Head, &Tail, 3);

    // display(Head, Tail);
    // iRet = count(Head, Tail);
    // printf("The count is %d\n", iRet);

    deleteAtLast(&Head, &Tail);

    display(Head, Tail);
    iRet = count(Head, Tail);
    printf("The count is %d\n", iRet);

    return 0;
}