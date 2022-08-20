#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

//Negetive Elements in array
void main()
{
 int a[10],i,j,n;
 clrscr();
 P("Enter the how many elements you want in array=");
 S("%d",&n);

 for(i=0;i<n;i++)
    {

	 P("Enter the value of a[%d]=",i);
	 S("%d",&a[i]);

    }

 P("\nNagetive elements are\n");
 for(i=0;i<n;i++)
    {

	  if(a[i]<0)
	    {
	     P("a[%d]=%d",i,a[i]);
	    }
	 P("\n");
      }
  getch();
  }