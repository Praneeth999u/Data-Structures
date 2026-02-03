#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    float marks;
    char grade;
};
int main()
{
    int i, n;

    struct student s1[3];
    printf("Enter student details\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nenter the student %d roll no", i + 1);
        scanf("%d", &s1[i].roll);
        printf("\nenter the student %d name", i + 1);
        scanf("%s", s1[i].name);
        printf("\nenter the student %d marks", i + 1);
        scanf("%f", &s1[i].marks);
        printf("\nenter the student %d grade", i + 1);
        scanf("%c", &s1[i].grade);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n%d\n%s\n%f\n%c", s1[i].roll, s1[i].name, s1[i].marks, s1[i].grade);
    }
    return 0;
}