#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
 char n;
 clrscr();
 P("\nEnter Your Choice=");
 S("%c",&n);

 if(n>='0' && n<='9')
 {
  P("\nIt's Digit");
  }
 else if(n>='a' && n<='z' || n>='A' && n<='Z')
     {
      P("\nIt's Alphabet");
      }

 else
 {
  P("\nIt's Special Charater");
  }
  getch();
  }
