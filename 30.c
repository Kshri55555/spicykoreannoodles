#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i, highest = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    for (i = 1; i < 5; i++)
    {
        if (s[i].marks > s[highest].marks)
        {
            highest = i;
        }
    }

    printf("\nStudent with Highest Marks\n");

    printf("Roll Number: %d\n", s[highest].roll);
    printf("Name: %s\n", s[highest].name);
    printf("Marks: %.2f\n", s[highest].marks);

    return 0;
}