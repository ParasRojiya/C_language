#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf

void main()

{
 char a[5];
 int i,j;
 clrscr();

 P("a=");
 S("%[^\n]",a);


 for(i=0;a[i]!=NULL;i++)
    {

     if(a[i]!=' ')
       {

	P("%c",a[i]);

	 }

     }
 P("\n");
 getch();
 }