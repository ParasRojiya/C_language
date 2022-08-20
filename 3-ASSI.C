#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
 int no,count=0;
 clrscr();
 P("Enter the value of no-");
 S("%d",&no);

 while(no!=0)
    {
     no=no/10;
     count++;
     }
 P("\nCount is %d ",count);

 getch();
 }