#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
 char choice;
 clrscr();
 P("\nPress M monday\nPress T tuesday\nPress W wednesday\nPress t thursday\nPress F for friday\nPress S for saturday\nPress s for sunday");
 P("\nEnter Your Choice=");
 S("%c",&choice);

 switch(choice)
     {
      case 'M':
	     P("Monday");
	     break;
      case 'T':
	     P("Tuesday");
	     break;
      case 'W':
	     P("Wednesday");
	     break;
      case 't':
	     P("Thursday");
	     break;
      case 'F':
	     P("Friday");
	     break;
      case 'S':
	     P("Saturday");
	     break;
      case 's':
	     P("Sunday");
	     break;
      dedault:
	     P("Invalid Choice");
       }
   getch();
   }
