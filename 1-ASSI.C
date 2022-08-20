#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
 char ch='a';
 clrscr();

 do
   {
    P("%c ",ch);
    ch++;
    }while(ch<='z');

    getch();
    }