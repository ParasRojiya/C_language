#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

//convert into transpose matrix
void main()
{
  int a[3][3],b[3][3],i,j,n=3;
  clrscr();

  for(i=0;i<n;i++)
     {
      for(j=0;j<n;j++)
	 {
	  P("Enter the value of a[%d][%d]=",i,j);
	  S("%d",&a[i][j]);
	  }
      }

   for(i=0;i<n;i++)
     {
      for(j=0;j<n;j++)
	 {
	  P("%d ",a[i][j]);

	  }P("\n");
      }

    for(i=0;i<n;i++)
     {
      for(j=0;j<n;j++)
	 {

	  b[j][i]=a[i][j];
	  }
      }
    P("AFTER TRANSPOSE\n");

    for(i=0;i<n;i++)
     {
      for(j=0;j<n;j++)
	 {
	  P("%d ",b[i][j]);

	  }        P("\n");
      }


      getch();
      }