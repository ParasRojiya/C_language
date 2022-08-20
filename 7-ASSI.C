#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
int s=0,s1=1,s2,no,i=0;
clrscr();
P("Enter the value of no-");
S("%d",&no);

while(i<no)
   {
    s2=s+s1;
    P("\n%d",s2);
    s=s1;
    s1=s2;
    i++;
    }
getch();
}