// Write a program to store information of 10 students and display them using structure.

#include <stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    int salary;
};
int main()
{
    struct employee e[100],temp;
    int i, j,n;
    printf("Number Of Student : ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Enter a Name of Employee : ");
        fflush(stdin);
        gets(e[i].name);

        printf("Enter a Employee Id : ");
        scanf("%d", &e[i].id);

        printf("Enter a Employee salary : ");
        scanf("%d", &e[i].salary);
    }
for ( i = 0; i < n; i++)
{
    printf("\n Name = %s  Id = %d  Salary = %d",e[i].name,e[i].id,e[i].salary);
}

return 0;
}