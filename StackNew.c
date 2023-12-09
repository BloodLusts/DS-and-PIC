#include<stdio.h>

void stop();
int top=-1;
int n=5;
int stack[5];

void look(int top,int *stack)
{
    if(top==-1)
    {
        printf("Stack is empty");
        printf("\n");
        return;
    }
    else
    {
        printf("Stack after operation:\n");
        for(int i=0;i<=top;i++)
        {
            printf("[%d] ",stack[i]);
        }
    }
    printf("\n");
}

void push()
{
    int x;
    printf("Enter the element to push:");
    scanf("%d",&x);
    if(top==n-1)
    {
        printf("Stack is full\n");
        return;    
    }
    else
    {
        top++;
        stack[top] = x;
        look(top,stack);
    }
    stop();
}

void pop()
{
    int poped;
    if(top==-1)
    {
        printf("Stack is empty");
        return;
    }
    else
    {
        poped = stack[top];
        top--;
        printf("poped element is %d\n",poped);
        look(top,stack);
    }
    stop();
}

void display()
{
    if(top==-1)
    {
        printf("stack is empty.");
        printf("\n\n");
        return;
    }
    else
    {
        look(top,stack);
        stop();
    }
}

void peak()
{
    if(top==-1)
    {
        printf("stack is empty.");
        printf("\n\n");
        return;
    }
    else
    {
        printf("top element is %d",stack[top]);
    }
    stop();
}

void stop()
{
    int choice;
    do
    {
        printf("\nSelect the operation\n");
        printf("1]push operation\n2]pop operation\n3]   display\n4]peak\n");
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
               peak();
                break;
            default:
                printf("\nInvalid selection:");
                break;
        } 
    }   while(choice != 5);
}


 int main()
 {
     stop();
     return 0;
 }