#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j, k, t, flag = 0;
    printf("Enter no of test cases: ");
    scanf("%d", &t);
    while (t--)
    {
        printf("Enter size of the array: ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter elements in sorted order: ");
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++)
                for (k = j + 1; k < n; k++)
                    if ((arr[i] + arr[j]) == arr[k])
                    {
                        printf("%d,%d,%d\n", i + 1, j + 1, k + 1);
                        flag = 1;
                        break;
                    }
    }
    if (flag == 0)
        printf("No sequence found");
}
