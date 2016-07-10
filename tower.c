# tower
#include<stdio.h>
#include<conio.h>
void tower(int n,char x,char y,char z);
void main()
{
int n;
printf("\n enter the numbere of rows");
scanf("%d",&n);
tower(n-1,'a','b','c');
getch();
}
void tower(int n,char x,char y,char z)
{
if(n>0)
{
tower(n-1,x,z,y);
printf("n%c->%c",x,y);
tower(n-1,z,y,x);
}}
