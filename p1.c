//accept  a no and check it is palindrome or not

#include<stdio.h>
int main()
{
int n,d,n1,r=0;
printf("enter no");
scanf("%d",&n);
(n1=n);
while(n>0)
{
d=n%10;
n=n/10;
r=r*10+d;
}
if(r==n1)
printf("no is palindrome");
else 
printf("no  is not palindrome");
}
