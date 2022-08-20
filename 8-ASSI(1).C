#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
int i,no,prime=0;
clrscr();
P("Enter the vlaue of no-");
S("%d",&no);

for(i=1;i<=no;i++)
   {
    if(i%no==0)
      {
       prime++;
       }
    }

if(prime==2)
  {
   P("\nNumber Is Prime");
   }
else
  {
   P("\nNumber Is not Prime");
   }
  getch();
  }