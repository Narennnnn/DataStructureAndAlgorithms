#include <stdio.h>
#include <math.h>
int linearSearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    int n, key;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter key: ");
    scanf("%d", &key);
    int ind = linearSearch(arr, n, key);
    if (ind > 0)
        printf("Present %d\n", ind + 1);
    else
        printf("Not Present %d\n", n);
}