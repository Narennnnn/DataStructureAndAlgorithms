#include <stdio.h>
#include <math.h>
int jumpSearch(int a[], int n, int k)
{
    int flag = 0, i;
    int end = sqrt(n);
    for (i = 0; i < n; i += end)
    {
        if (a[i] > k)
            break;
    }
    if (i >= n)
        i = n - 1;
    for (; a[i] >= k; i--)
    {
        if (a[i] == k)
        {
            return i;
            flag = 1;
        }
    }
    if (a[i] < k && flag == 0)
    {
        return -1;
    }
}

int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int key;
    printf("Enter key to search:");
    scanf("%d", &key);
    int index = jumpSearch(arr, n, key);
    if (index >= 0)
        printf("Found at %d index!", index);
    else
        printf("Not found");
}