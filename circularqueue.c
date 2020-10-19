#include<stdio.h>
#include<stdlib.h>
#define QUE_SIZE 5
int item,front=0;rear=-1,q[QUE_SIZE],count=0;
void insertrear()
{
    if(count==QUE_SIZE)
    {
        printf("Queue overflow\n");
        return;
    }
    rear=(rear+1)%QUE_SIZE;
    q[rear]=item;
    count++;
}
int deletefront()
{
    if(count==0)
        return -1;
    item=q[front];
    front=(front+1)%QUE_SIZE;
    count=count-1;
    return item;
}
void displayQ()
{
    int i,f;
    if(count==0)
        {
            printf("Queue is empty\n");
            return;
        }
    f=front;
    printf("Content of the queue:\n ");
    for(i=1;i<=count;i++)
    {
        printf("%d\n",q[f]);
        f=(f+1)%QUE_SIZE;
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
