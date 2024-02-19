#include<stdio.h>
double add(int x,float y)
{
return (x+y);
}
int main()
{
int a;
float b,sum;
printf("enter two number:");
scanf("%d%f",&a,&b);
printf("the sum of %lf:",add(a,b));
}