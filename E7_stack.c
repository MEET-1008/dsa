#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 3
int stack_arr[MAX];
int top = -1;
void push(int item);
int pop();
int peek();
int IsEmpty();
int IsFull();
void display();
int main()
{
    int choise, item;

    while (1)
    {
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.Display the top element");
        printf("\n4.Display all stack element");
        printf("\n5.Quit");
        printf("\nEnter your choise : ");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:

            printf("\nEnter the item to be pushed : ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            item = pop();
            printf("\nPopped item is : %d\n", item);
            break;
        case 3:
            printf("\nPopped item top : %d\n", peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("\nWrong choise.");
        }
    }
    getch();
}
void push(int item)
{
    if (IsFull())
    {
        printf("\nStack Overflow");
        return;
    }
    top = top + 1;
    stack_arr[top] = item;
}
int pop()
{
    int item;
    if (IsEmpty())
    {
        printf("\nStack Under OverFlow");
        exit(1);
    }
    item = stack_arr[top];
    top = top - 1;
    return item;
}
int peek()
{
    if (IsEmpty())
    {
        printf("\nstack Underlow");
    }
}
int IsEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int IsFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}
void display()
{
    int i;
    if (IsEmpty())
    {
        printf("\nstack is empty");
        return;
    }
    printf("\nStack Element: \n");
    for (i = top; i >= 0; i--)
    {
        printf("\n the element at top[%d]=%d\n", i, stack_arr[i]);
    }
    printf("\n");
}