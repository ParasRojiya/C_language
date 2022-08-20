#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

//addition of two matrices
void main()
{
 int a[3][3],b[3][3],c[3][3],i,j;
 clrscr();

 for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
	{
	 P("Enter the value of a[%d][%d]=",i,j);
	 S("%d",&a[i][j]);
	 }
     }

 for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
	{
	 P("Enter the value of b[%d][%d]=",i,j);
	 S("%d",&b[i][j]);
	 c[i][j]=a[i][j]+b[i][j];
	 }
     }

  for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
	{

	 P("%d ",c[i][j]);

	 }P("\n");
     }


  getch();
  }