#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void ary(int[],int);

void main()
{
 int a[10],n,i,sum=0;
 clrscr();
 P("\nEnter the value of n=");
 S("%d",&n);

 for(i=0;i<n;i++)
    {
     P("a[%d]=",i);
     S("%d",&a[i]);
     }

 ary(a,n);

 getch();
 }

 void ary(int b[],int n)
 {
  int sum=0,i;

  for(i=0;i<n;i++)
     {
      P("\na[%d]=%d",i,b[i]);
      sum=sum+b[i];
      }

  P("\nSum is %d",sum);
  }