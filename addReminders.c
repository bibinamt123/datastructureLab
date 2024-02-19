#include<stdio.h>
int main()
{
int n,m,sum=0,i,j;
printf("enter limit:");
scanf("%d",&n);
printf("enter divided value:");
scanf("%d",&m);
for(i=0;i<=n;i++)
{
j=i%m;
sum=sum+j;
}
printf("sum of remainder:%d",sum);
}
