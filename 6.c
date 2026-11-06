#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float average, percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Percentage = %.2f%%", percentage);

    return 0;
}