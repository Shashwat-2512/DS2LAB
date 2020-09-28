#include <stdio.h>
#define STACK_SIZE 5

int top=-1;
int s[10];
int item;
void push()
{
    if(top==STACK_SIZE-1)
    {
        printf("Stack overflow\n");
        return;
    }
    top+=1;
    s[top]=item;
}
int pop()
{
    if(top==-1)
        return -1;
    else
        return s[top--];
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("content of the stack:\n");
    for(i=top;i>=0;--i)
    {
        printf("%d\n",s[i]);
    }
}
int main()
{
    int item_deleted;
    int choice;
    for(;;)
    {
        printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Item to be added\n");
            scanf("%d",&item);
            push();
            break;
        case 2:
            item_deleted=pop();
            if(item_deleted==-1)
                printf("Stack is empty\n");
            else
                printf("Item deleted is %d\n",item_deleted);
            break;
        case 3:
            display();
            break;
        default :exit(0);
        }

    }
    return 0;
}
