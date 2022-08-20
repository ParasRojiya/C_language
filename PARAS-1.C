#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void fact(int);

void main()
{
 int fect=1,n,i;
 clrscr();
 P("\Enter the value of n-");
 S("%d",&n);

 fact(n);

 getch();

}

void fact(int n)
{
 int fect=1,i=1,m;
 m=n;
 fct:
   if(i<=m)
     {
       fect=fect*n;
       i++;
       n--;
       goto fct;
       }
    P("\nFactorial is %d",fect);
  }