#include<string.h>
#include<stdio.h>
void tower(int n,char src,char temp,char dest)
{
    if(n==1)
    {
        printf("move disk 1 from %c to %c",src,dest);
        return;
    }
    tower(n-1,src,dest,temp);
    printf("\nmove disk %d from %c to %c\n",n,src,dest);
    tower(n-1,temp,src,dest);
}
int main()
{
    int n;
    printf("\nEnter the number of disk: ");
    scanf("%d",&n);
    tower(n,'S','T','D');
    return 0;
}
