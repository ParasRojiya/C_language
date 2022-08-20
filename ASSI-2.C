#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
 int n;
 clrscr();
 P("\nEnter Number=");
 S("%d",&n);

 (n%2==0)?P("\nIt's even Number"):P("\nIt's Odd Number");

 getch();
 }