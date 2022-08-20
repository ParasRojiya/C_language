#include<conio.h>
#include<stdio.h>
#define P printf
#define S scanf

void main()
{
 int a,b;
 clrscr();
 P("\nEnter the value of a=");
 S("%d",&a);
 P("\nEnter the value of b=");
 S("%d",&b);

 if(a>b)
   {
    P("\na is greater than b\nb is less than a");
    }
 else if(b>a)
   {
    P("a is less than b\nb is greater than a");
    }
 else
    {
     P("a and b are same");
     }
     getch();
     }