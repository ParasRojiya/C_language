#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

//insert,delete,update elements in array
void main()
{
 int a[10],i,j,k,n,z,val,pos;
 clrscr();
 P("Enter the size of array=");
 S("%d",&n);

 P("\nPress 1 to insert elements in array");
 P("\nPress 2 to delete elements in array");
 P("\nPress 3 to update elements in array");
 P("\nEnter Your Choice=");
 S("%d",&z);

 switch(z)
   {
      case 1:

	     for(i=0;i<n;i++)
		 {
		 P("Enter the value of a[%d]=",i);
		 S("%d",&a[i]);
		 }


	     P("\nEnter The value of you want to insert=");
	     S("%d",&val);
	     P("\nEnter in which position you want to insert value=");
	     S("%d",&pos);


       default:
	     break;
	     }
getch();
}