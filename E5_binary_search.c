#include <stdio.h>

int binarysearch(int arr[], int length, int eliment)
{
    int low, mid, high;
    low = 0;
    high = length - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == eliment)
        {
            return mid;
        }
        if (arr[mid] > eliment)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(arr) / sizeof(int);
    int eliment = 6;
    int ansindex = binarysearch(arr, length, eliment);
    if (ansindex == -1)
    {
        printf("no data found !");
    }
    else
    {
        printf("the eliment %d found at index %d \n ", eliment, ansindex);
    }

    return 0;
}