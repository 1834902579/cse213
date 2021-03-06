#include <stdio.h>
#include <stdlib.h>

typedef struct node node;
struct node {
    int data;
    struct node * prev;
    struct node * next;
}*head, *last;

void createList(int n);
void displayList();
void insertBack(int data);
void deleteValue();
void Back();
void deleteAt();




int main()
{
    int n, data, choice=1;

    head = NULL;
    last = NULL;
    while(choice != 0)
    {
        printf("1. Create List\n");
        printf("2. Insert Back\n");
        printf("3. Delete Value\n");
        printf("4. Delete At\n5. Back\n6. Marge two list\n");
        printf("7. Display list\n");
        printf("0. Exit\n");
        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the total number of nodes in list: ");
                scanf("%d", &n);

                createList(n);
                break;
            case 2:
                printf("Enter data of last node : ");
                scanf("%d", &data);

                insertBack(data);
                break;
            case 3:

                deleteValue();
                break;
            case 4:
               deleteAt();
                break;
            case 5:
                  Back();

                break;
            case 6:

                break;
            case 7:
                displayList();
                break;
            case 0:
                break;
            default:
                printf("Error! Invalid choice. Please choose between 0-5");
        }

        printf("\n\n");
    }

    return 0;
}


void createList(int n)
{
    int i, data;
    struct node *newNode;

    if(n >= 1)
    {

        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->prev = NULL;
        head->next = NULL;

        last = head;

        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->prev = last;
            newNode->next = NULL;

            last->next = newNode;
            last = newNode;
        }

    }
}


void displayList()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        printf("DATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of %d node = %d\n", n, temp->data);

            n++;

            temp = temp->next;
        }
    }
}

void insertBack(int data)
{
    struct node * newNode;

    if(last == NULL)
    {
        printf("Error, List is empty!\n");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = last;

        last->next = newNode;
        last = newNode;

    }
}




void deleteValue()
{
    struct node * toDelete;

    if(last == NULL)
    {
        printf("Unable to delete. List is empty.\n");
    }
    else
    {
        toDelete = last;

        last = last->prev;
        if (last != NULL)
            last->next = NULL;
        free(toDelete);

    }
}
void Back()
{
    struct node *current, *temp;

    current = head;
    while(current != NULL)
    {

        temp = current->next;
        current->next = current->prev;
        current->prev = temp;


        current = temp;
    }
}

void deleteAt()
{
    struct node * toDelete;

    if(last == NULL)
    {
        printf("Unable to delete. List is empty.\n");
    }
    else
    {
        toDelete = last;

        last = last->prev;
        if (last != NULL)
            last->next = NULL;
        free(toDelete);

    }
}
