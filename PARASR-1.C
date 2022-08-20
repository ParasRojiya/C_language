#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf

void main()
{
 char a[20];
 int freq[200]={0},i;

 clrscr();

 P("Enter string-");
 gets(a);

 for(i=0;a[i]!='\0';i++)
    {
     freq[a[i]]++;
     }

 for(i=0;i<200;i++)
    {
     if(freq[i]!=0)
	{
	 P("char %c occurs %d times\n",i,freq[i]);
	 }
     }


 getch();
 }


