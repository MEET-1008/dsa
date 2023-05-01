#include <stdio.h>
#include <stdlib.h>
#define max 4
int a[max];
int front = -1;
int rear = -1;
void insert()
{
    int data;
    printf("Enter the data: ");
    scanf("%d", &data);
    if (rear == (max - 1))
    {
        printf("Queue is full");
        exit(1);
    }
    else if (front == (-1))
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    a[rear] = data;
    printf("data is inserted\n");
}

void rmv()
{
    if (rear == -1)
    {
        printf("Queue is empty:\n");
    }
    else if (front == rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("data %d delete succesfully\n", a[front]);
        front = front + 1;
    }
}
void display()
{
    for (int i = front; i <= rear; i++)
    {

        printf("%d\n", a[i]);
    }
}
int main()
{

    int choice;

    printf("1. for insert\n");
    printf("2. for delete\n");
    printf("3. for display Queue data: \n");
    printf("0. for exit\n");
    do
    {
        printf("\neneter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            rmv();
            break;
        case 3:
            printf("QUEUE: \n");
            display();
        }
    } while (choice != 0);
    return 0;
}