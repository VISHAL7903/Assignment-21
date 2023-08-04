#include <stdio.h>

struct Marks 
{
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() 
{
    struct Marks students[5];
    int i;

    // Input the marks of each student
    printf("Enter the details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf(" %s", students[i].name);

        printf("Chemistry Marks (out of 100): ");
        scanf("%d", &students[i].chem_marks);

        printf("Mathematics Marks (out of 100): ");
        scanf("%d", &students[i].maths_marks);

        printf("Physics Marks (out of 100): ");
        scanf("%d", &students[i].phy_marks);

        printf("\n");
    }

    // Display the percentage of each student
    printf("Percentage of each student:\n");
    for (i = 0; i < 5; i++) 
    {
        float total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = (total_marks / 300) * 100;
        printf("Student %d = Roll No. %d - Name: %s = Percentage: %.2f%%\n", i + 1, students[i].roll_no, students[i].name, percentage);
    }

    return 0;
}