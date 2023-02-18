#include <stdio.h>
#include <math.h>
void jumpSearch(int a[], int n, int k)
{
    int i, low = 0, jump = sqrt(n), high = jump, comp = 1, flag = 0;
    while (k >= a[high] && high < n)
    {
        comp++;
        low = high;
        high += jump;
    }
    if (high > n - 1)
        high = n;
    for (i = low; i < high; i++)
    {
        if (a[i] == k)
        {
            printf("Present %d\n", comp);
            flag = 1;
        }
    }
    if (flag == 0)
        printf("Not Present %d", comp + 1);
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
    jumpSearch(arr, n, key);
}
