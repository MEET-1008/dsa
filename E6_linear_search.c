#include <stdio.h>
int linearsearch(int arr[], int length, int eliment)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == eliment)
        {
            return i;
        }
    }
}
int  main()
{
    int arr[] = {1, 52,26, 3, 5, 7};
    int length = sizeof(arr)/sizeof(int);
    int eliment = 3;
    int ansindex = linearsearch(arr , length, eliment);
    printf("the eliment %d found at index %d \n ", eliment, ansindex);
    return 0;
}