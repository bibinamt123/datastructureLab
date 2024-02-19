#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void menu();
int a[50],s,choice,i=0;
void main()
{
printf("\n enter no of elemt");
scanf("%d",&s);
printf("enter elements");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
menu();
}
void menu()
{
printf("\n 1.insert");
printf("\n2.delete");
printf("\n3.exit");
printf("enter ur choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
exit(1);
}
}
void insert()
{
int loc,ele;
printf("enter location");
scanf("%d",&loc);
printf("enetr elemnt insert");
scanf("%d",&ele);

for(i=s;i>loc-1;i--)
a[i]=a[i-1];
a[loc-1]=ele;

printf("elemnt inserted");
printf("new array");
s++;
for(i=0;i<s;i++)
printf("\t%d",a[i]);
menu();
}
void delete()
{
int loc;
printf("enter location");
scanf("%d",&loc);
for(i=loc-1;i<s-1;i++)
{
a[i]=a[i+1];
}
printf("elmt deled");
printf("new array after deletion");
s--;
for(i=0;i<s;i++)
{
printf("\t%d",&a[i]);
}
menu();
}





