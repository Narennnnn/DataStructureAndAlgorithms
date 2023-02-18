#include <stdio.h>
#include <math.h>
void binarySearch(int a[], int l, int h, int key)
{
    int comparsions = 0, mid, flag = 0;
    while (l <= h)
    {
        comparsions++;
        mid = l + (h - l) / 2;
        if (a[mid] == key)
        {
            printf("Present %d", comparsions);
            flag = 1;
            break;
        }
        else if (a[mid] < key)
            l = mid + 1;
        else if (a[mid] > key)
            h = mid - 1;
    }
    if (flag == 0)
        printf("Not present %d", comparsions);
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
    binarySearch(arr, 0, n - 1, key);
}