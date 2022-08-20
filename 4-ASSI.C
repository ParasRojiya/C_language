#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
 int no,i,f,l,sum=0;
 clrscr();
 P("Enter the value of no-");
 S("%d",&no);

 l=no%10;

 while(no!=0)
    {
     i = no%10;
     no=no/10;
    }
  f=i;
 P("f=%d l=%d",f,l);

 sum=f+l;
 P("\nSum is %d",sum);
 getch();
 }



