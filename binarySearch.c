#include <stdio.h>
#include <math.h>
int binarySearch(int a[], int l, int h, int key)
{
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            l = mid + 1;
        else if (a[mid] > key)
            h = mid - 1;
    }
    return -1;
}
int main()
{
    int n, key;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements in sorted order: ");
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter key: ");
    scanf("%d", &key);
    int ind = binarySearch(arr, 0, n - 1, key);
    if (ind > 0)
        printf("Present at index %d\n", ind);
    else
        printf("Not Present");
}