// Quest:- Write a function to take input employee data from the user. [ Refer structure from question 1 
#include<stdio.h>
struct Employee
{
int Id;
char name[50];
int salary;
};
int main()
{
    struct Employee e;
    printf("Enter the name of Employee\n");
    gets(e.name);
    printf("Enter name of Id\n");
    scanf("%d",&e.Id);
    printf("Enter name of Salary\n");
    scanf("%d",&e.salary);
    printf("Name = %s, Id = %d, Salaey = %d",e.name,e.Id,e.salary);
    return 0;
    
}