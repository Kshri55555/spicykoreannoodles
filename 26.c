#include <stdio.h>

void calculate(int a[], int n)
{
    int i, sum = 0, largest;

    largest = a[0];

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];

        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    printf("Sum of array elements = %d\n", sum);
    printf("Largest element = %d", largest);
}

int main()
{
    int a[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    calculate(a, n);

    return 0;
}