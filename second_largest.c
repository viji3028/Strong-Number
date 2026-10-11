
#include <stdio.h>

int main()
{
    int a[100], n, i, largest, second;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = -2147483647;

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > second)
        {
            second = a[i];
        }
    }

    if (second == -2147483647)
        printf("Second largest element does not exist");
    else
        printf("Second largest element = %d", second);

    return 0;
}
