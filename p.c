//accept a number and print sum of single  digit

#include<stdio.h>
int main()
{
int n,d,s=0;
printf("enter no");
scanf("%d",&n);
do
{
s=0;
while(n>0)
{
d=n%10;
s=s+d;
n=n/10;
}
}while(n>9);
printf("sum of digit=%d",s);
}
