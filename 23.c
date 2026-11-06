#include <stdio.h>

float function(float x)
{
    return (x * x * x) - x - 2;
}

int main()
{
    float a = 1, b = 2, mid;
    int i;

    if (function(a) * function(b) >= 0)
    {
        printf("Invalid interval");
        return 0;
    }

    for (i = 1; i <= 20; i++)
    {
        mid = (a + b) / 2;

        if (function(mid) == 0)
        {
            break;
        }
        else if (function(a) * function(mid) < 0)
        {
            b = mid;
        }
        else
        {
            a = mid;
        }
    }

    printf("Approximate root = %.6f", mid);

    return 0;
}