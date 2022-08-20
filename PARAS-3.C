#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
#include<string.h>


void str_len(char[],int);

void main()
{
 char a[10];
 int i,length;
 clrscr();

 gets(a);

 str_len(a,length);

 getch();

 }

 void str_len(char b[],int length)
 {
  int n,i;
  length=strlen(b);


  P("\nLength is %d",length);
  }