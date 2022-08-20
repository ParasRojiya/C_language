#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
 int i,no,mul=1;
 clrscr();
 P("enter the value of no-");
 S("%d",&no);

 for(i=1;i<=10;i++)
   {
    mul=no*i;
    P("\n%d * %d = %d",no,i,mul);
    }
   getch();
   }