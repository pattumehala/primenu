#include<stdio.h>
int main()
{
int i,n,count=0;
printf("\nEnter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("\nIt is a prime number");
}
else
{
printf("\nIt is not a prime number");
}
return 0;
}
