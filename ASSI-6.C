#include<conio.h>
#include<stdio.h>
#define P printf
#define S scanf

void main()
{
 int n;
 clrscr();
 P("Enter Number=");
 S("%d",&n);

 if(n>0)
   {
    P("\nNumber Is Positive");
    }
 else if(n<0)
   {
    P("\nNumber Is Negative");
    }
  else
   {
    P("\nNumber Is Zero");
    }

    getch();
    }