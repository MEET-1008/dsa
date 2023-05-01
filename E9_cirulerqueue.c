#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int cq[MAX];
int front = -1, rear = -1;

void insert(int item)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Circular Queue is full\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == MAX - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
    }
    cq[rear] = item;
    printf("%d inserted successfully\n", item);
}

void delete()
{
    if (front == -1)
    {
        printf("Circular Queue is empty\n");
        return;
    }
    printf("%d deleted successfully\n", cq[front]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == MAX - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void display()
{
    if (front == -1)
    {
        printf("Circular Queue is empty\n");
        return;
    }
    printf("Circular Queue elements are:\n");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ", cq[i]);
    }

    else
    {
        for (int i = front; i < MAX; i++)
            printf("%d ", cq[i]);
        for (int i = 0; i <= rear; i++)
            printf("%d ", cq[i]);
    }
    printf("\n");
}

int main()
{
    int choice, item;
    do
    {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the item to insert: ");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:

            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 4);
    return 0;
}