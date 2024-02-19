#include<stdio.h>
#include<conio.h>
int stack [100], choice,n, top,x,i;
void push (void);
void pop (void);
void display (void);
void main()
{
top = -1;
printf("\n Enter the size of STACK (MAX=100]: ");
scanf("%d",&n);
printf("\n\t STACKS OPERATIONS VSING ARRAY");
printf ("\n\t.......");
printf ("\n\t 1. PUSH \n \t 2. POP \n \t 3. DISPLAY \n\t4. EXIT");
do
{
printf("\n Enter the choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf ("\n\t EXIT POINT");
break;
}
default:
{
printf ("\n\t please enter a valid choice(1\2\3\4)");
}
}
}
while (choice!=4);
getch();
}
void push()
{
if (top>=n-1)
{
printf ("\n\t STACK is over flow");
}
else
{
printf("Enter a value to be pushed");
scanf("%d",&x);
top ++;
stack [top] = x;
}
}
void pop()
{
if (top <=-1)
{
printf("\n\t stack is underflow");
}
else
{
printf ("\n\t the popped element is %d", stack [top]);
top--;
} 
}
void display ()
{
if (top>=0)
{
printf("\n the elements in STACK \n");
for(i=top; i>=0;i--)
printf ("\n%d", stack [i]);
printf("\n press Next choice");
}
else
{
printf ("The STACK is empty ");
}
}