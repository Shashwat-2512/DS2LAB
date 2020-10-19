#include<stdio.h>
#include<stdlib.h>
#define QUE_SIZE 5
int item,front=0;rear=-1,q[QUE_SIZE];
void insertrear()
{
    if(rear==QUE_SIZE-1)
    {
        printf("Queue overflow\n");
        return;
    }
    rear=(rear+1);
    q[rear]=item;
}
int deletefront()
{
    if(front>rear){
        front=0;
        rear=-1;
        return -1;
    }
        return q[front++];
}
void displayQ()
{
    int i;
    if(front>rear)
        {
            printf("Queue is empty\n");
            return;
        }

    printf("Content of the queue:\n ");
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",q[i]);
    }

}
int main()
{
    int choice;
    for(;;)
    {
        printf("\n1:Insert rear\n2:Delete Front\n3:Display\n4:exit\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the item to be inserted\n");
            scanf("%d",&item);
            insertrear();
            break;

            case 2:item=deletefront();
            if(item==-1)
                printf("Queue is empty\n");
            else
                printf("Item deleted=%d\n",item);
            break;

            case 3:displayQ();
            break;

            default:exit(0);
        }
    }
    return 0;
}

