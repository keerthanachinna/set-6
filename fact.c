#include<stdio.h>
#inclide<conio.h>
main()
{
int n,res;
printf("enter the number");
scanf("%d",&n);
res=fact(n);
}
fact(int n)
{
int res;
if(n==0)
{
res==1;
}
else
{
res=n*fact(n-1);
}
return res;
