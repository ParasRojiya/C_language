#include<conio.h>
#include<stdio.h>
#define P printf
#define S scanf

void main()
{
 int a,b,c,d;
 clrscr();
 P("\nEnter the value of a-");
 S("%d",&a);
 P("\nEnter the value of b-");
 S("%d",&b);
 P("\nEnter the value of c-");
 S("%d",&c);
 P("\nEnter the value of d-");
 S("%d",&d);

 if(a>b || a>c || a>d)
   {
    P("\na is big");
    }
else if(b>c || b>d)
    {
       P("\nb is big");
       }
else if(c>d)
    {
     P("\nc is big");
     }
else
  {
   P("\nd is big");
   }

   getch();
   }

