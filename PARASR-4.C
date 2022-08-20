#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf

//Remove all repeated characters in a string
void main()
{
 char a[10];
 int i,j,k,l;
 clrscr();


S("%s",a);
l=strlen(a);

P("\n");

for(i=0;i<l;i++)
   {
    for(j=i+1;j<l;j++)
      {
	if(a[i]==a[j])
	  {
	   for(k=j;k<l;k++)
	      {

		a[j]=a[j+1];
	       }
	   i--;
	   }
      }
  }


for(i=0;i<l;i++)
   {
    P("%c",a[i]);
    }


getch();
}