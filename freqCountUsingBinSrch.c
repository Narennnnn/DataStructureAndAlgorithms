#include <stdio.h>
#include <math.h>
int binarySearch(int a[], int l, int h, int key)
{
    int mid;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            l = mid + 1;
        else if (a[mid] > key)
            h = mid - 1;
    }
    return -1;
}
void countCopies(int a[], int n, int key)
{
    int mid = binarySearch(a, 0, n - 1, key);
    int prevIndx = mid - 1, nextIndx = mid + 1, count = 1;
    while (prevIndx >= 0 && a[prevIndx] == key)
    {
        count++;
        prevIndx--;
    }
    while (nextIndx < n && a[nextIndx] == key)
    {
        count++;
        nextIndx++;
    }
    if (mid != -1)
        printf("%d - %d", key, count);
    else
        printf("Not present");
}

int main()
{
    int n, key, t;
    scanf("%d", &t);
    while (t--)
    {
        printf("Enter size of array: ");
        scanf("%d", &n);
        printf("Enter array elements in sorted order: ");
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        printf("Enter key: ");
        scanf("%d", &key);
        countCopies(arr, n, key);
    }
}