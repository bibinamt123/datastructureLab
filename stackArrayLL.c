#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct stack
{
int data;
struct stack * next;
};
struct stack * top=NULL;
struct stack * push(struct stack * ,int);
struct stack * display(struct stack *);
struct stack * pop(struct stack *);
int main()
{
int val,option,choice;
do{
printf("\n main menu");
printf("\n 1.push");
printf("\n 2.pop");
printf("\n 3.display");
printf("\n 4.exit");
printf("\nenter optin:");
scanf("%d",&option);
switch(option)
{
case 1:
printf("\n  enter the no to be pushed:");
scanf("%d",&val);
top=push(top,val);
break;
case 2:
top=pop(top);
break;
case 3:
top=display(top);
break;
}
}
while(choice!=4);

return 0;
}
struct stack * push(struct stack * top ,int val)
{
struct stack * ptr;
ptr=(struct stack *)malloc(sizeof(struct stack));
ptr->data=val;
if(top==NULL)
{
ptr->next=NULL;
top=ptr;
}
else{
ptr->next=top;
top=ptr;
}
return top;
}
struct stack * display(struct stack * top)
{
struct stack * ptr;
ptr=top;
if(top==NULL)
printf("\n Stack is empty");
else
{
while(ptr!=NULL)
{
printf("\n%d",ptr->data);
ptr=ptr->next;
}
}
return top;
}
struct stack *pop(struct stack * top)
{
struct stack * ptr;
ptr=top;
if(top==NULL)
printf("\n STACK underflow");
else
{
top=top->next;
printf("\n the value being deleted is:%d",ptr->data);
free(ptr);
}
return top;
}






