//accept a no and check it is armstrong or not

#include<stdio.h>
int main()
{
int n,d,n1,s=0;
printf("enter number");
scanf("%d",&n);
n1=n;
while(n>0)
{
d=n%10;
n=n/10;
s=s+d*d*d;

}
if(s==n1)
printf("no is armstrong");
else
printf("no is not armstrong");
}
