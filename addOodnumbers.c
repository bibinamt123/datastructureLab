#include<stdio.h>
int main()
{
int limit,sum=0,i;
printf("enter limit:");
scanf("%d",&limit);
for(i=0;i<=limit;i++)
{
	if(i%2!=0)
	{
	sum=sum+i;
	}
}
printf("total odd value is:%d",sum);
return 0;
}