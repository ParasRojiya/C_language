#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf

//Remove all repeated characters in a string
void main()
{
 char a[10];
 int i,j;
 clrscr();

for(i=0;i<a[i]!=NULL;i++)
   {
    S("%c",&a[i]);
    }



P("\n");

for(i=0;a[i]!=NULL;i++)
   {
    for(j=i+1;a[j]!=NULL;j++)
      {
	if(a[i]!=a[j])
	  {
	    P("%c",a[i]);
	  }
      }
   }
getch();
}