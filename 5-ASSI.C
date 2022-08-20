#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
int i,no,rev=0,m;
clrscr();
P("enter the value of no-");
S("%d",&no);
m=no;

while(no!=0)
   {
    i=no%10;
    rev=rev*10+i;
    no=no/10;
    }
P("\nReverse is %d",rev);

if(m==rev)
  {
   P("\nNumber Is Palindrome");
   }
else
  {
   P("\nNumber Is not Palindrome");
   }
  getch();
  }