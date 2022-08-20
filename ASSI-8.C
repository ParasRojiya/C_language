#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
 int salary,total=0;
 clrscr();
 P("\nEnter Salary=");
 S("%d",&salary);

 if(salary>=1000 && salary<=5000)
   {
    total=salary+1000;
    }
else if(salary>5000 && salary<=10000)
  {
     total=salary+2000;
     }
else if(salary>10000 && salary<=20000)
  {
   total=salary+3000;
   }
else if(salary>20000 && salary<=50000)
  {
   total=salary+4000;
   }
 else
   {
    P("\nYour Salary expetations are higher than we can afford");
    }

P("\nEmployee gets %d salary",total);


getch();
}