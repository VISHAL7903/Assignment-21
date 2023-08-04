 // Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
struct Employee
{
int Id;
char name[30];
int salary;
};
int main()
{
    struct Employee e[5];
    int i;
    for(i=0;i<=4;i++)
    {
        printf("Enter the name of Employee\n");
        fflush(stdin);
        gets(e[i].name);
        printf("Enter name of Id\n");
        scanf("%d",&e[i].Id);
        printf("Enter name of Salary\n");
        scanf("%d",&e[i].salary);
    }
    for(i=0;i<=4;i++)
    {
        printf("Name = %s, Id = %d, Salaey = %d\n",e[i].name,e[i].Id,e[i].salary);
    }
    return 0;
}
    