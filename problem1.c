// C program to find the total, average of n students using structures

#include <stdio.h>
struct student
{
    int marks;
};
int main()
{

    struct student s[100];
    int i, n, total = 0;
    float avg;
    printf("enter the value of n\n");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("\n enter student %d marks ", i+1);
        scanf("%d", &s[i].marks);
        total = total + s[i].marks;
    }
    avg = total / n;
    printf("\n total marks = %d\n average = %f ", total, avg);
    return 0;
}