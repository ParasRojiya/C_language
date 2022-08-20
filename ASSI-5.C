#include<conio.h>
#include<stdio.h>
#define P printf
#define S scanf

void main()
{
 float n,total=0,surcharge,TOTAL;
 int unit;
 clrscr();
 P("\nEnter Units used=");
 S("%d",&unit);

 if(unit<=50)
   {
    total=unit*0.50;

    }
 else if(unit>50 && unit<=150)
   {
    total=unit*0.75;

    }
 else if(unit>150 && unit<=250)
   {
    total=unit*1.20;

    }
 else
  {
   total=unit*1.50;

   }
 surcharge=total*20/100;
 TOTAL=total+surcharge;
 P("\n%d units are used\nbill according to usage is %.2f\nAdditional surcharge is %.2f\nTotal Payable Amount is %.2f",unit,total,surcharge,TOTAL);

  getch();
   }