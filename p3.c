//accept a no and reverse it

#include<stdio.h>
int main()
{
int n,d,r=0;
printf("enter number");
scanf("%d",&n);
while(n>0)
{
d=n%10;
n=n/10;
r=r*10+d;
}
printf("reverse no=%d",r);
}
