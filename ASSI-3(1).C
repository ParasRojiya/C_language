#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
int celsius,fahrenheit;
clrscr();
P("Enter the value of celsius=");
S("%d",&celsius);
fahrenheit=(celsius*5)/9+32;
P("\n %d celsius = %d fahrenheit",celsius,fahrenheit);
getch();
}
