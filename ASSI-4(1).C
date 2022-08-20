#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
int base_salary,HRA,DA,TA,gross_salary;
clrscr();
P("Enter base salary=");
S("%d",&base_salary);
P("Enter HRA=");
S("%d",&HRA);
P("Enter DA=");
S("%d",&DA);
P("Enter TA=");
S("%d",&TA);

gross_salary=base_salary+HRA+DA+TA;

P("Total Gross salary is =");
P("%d",gross_salary);

getch();
}
