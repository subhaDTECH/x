#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void display()
{
    struct Node *temp = head;
    while (temp != NULL)
    {

        printf("%d->", temp->data);
        temp = temp->next;
    }
}
int lenght()
{
    struct Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
}
void append()
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node)); // mem allocated
    temp->prev = NULL;
    temp->next = NULL;
    printf("Enter data: ");
    scanf("%d", &temp->data);
    // new node created;
    // append means add only at the end;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
        temp->prev = p;
    }
}

void appendAtLoc()
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data1: ");
    scanf("%d", &temp->data);
    temp->link = NULL;
    printf("Enter location: ");
    int loc;
    scanf("%d", &loc);

    struct Node *p = head;
    while (i < loc)
    {
        p = p->next;
        i++;
    }

    temp->next = p->next;
    p->next->prev = temp;

    p->next = temp;
    temp->prev = p;
}
int main()
{

    int choice;
    while (1)
    {
        printf("\n0 : Add at end \n");
        printf("1 : Add at any location\n");
        printf("2 : Display\n");
        printf("3 : Delete at any location\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            append();
            break;
        case 1:
            appendAtLoc();
            break;
        case 2:
            display();
            break;
        // case 3:
        //     deleteAtLoc();
        //     break;
        case 7:
            exit(1);

        default:
            printf("Invalid operation\n");
            break;
        }
    }
}