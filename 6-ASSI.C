#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
int no,fact=1;
clrscr();
P("Enter the value of no-");
S("%d",&no);

while(no!=0)
  {
   fact=fact*no;
   no--;
   }
  P("\nFactorial Is %d",fact);
  getch();
  }