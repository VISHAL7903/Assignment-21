// Write a function to find the highest salary employee from a given array of 10 employees


#include<stdio.h>
struct Employee
{
int Id;
char name[30];
int salary;
};
int main()
{
    struct Employee e[10];
    int i,high;
    for(i=0;i<=9;i++)
    {
        printf("Enter the name of Employee\n");
        fflush(stdin);
        gets(e[i].name);
        printf("Enter name of Id\n");
        scanf("%d",&e[i].Id);
        printf("Enter name of Salary\n");
        scanf("%d",&e[i].salary);
    }
    high = e[0].salary;
    for (i = 0; i <=9; i++)
    {
        if (e[i].salary > high)
            high = e[i].salary;
    }
    printf("\n Highest salary employee details:");
    for (i = 0; i <= 9; i++)
    {
        if (e[i].salary == high)
            printf("\n %d\t%s\t%d", e[i].Id, e[i].name, e[i].salary);
    }
    return 0;
}