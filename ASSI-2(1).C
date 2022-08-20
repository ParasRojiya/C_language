#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
int a,b,c;
clrscr();
P("Enter the value of a=");
S("%d",&a);
P("\n Enter the value of b=");
S("%d",&b);

P("\nBefore swapping value of a=%d b=%d ",a,b);

c=a;
a=b;
b=c;

P("\n After swapping value of a=%d b=%d",a,b);
getch();
}