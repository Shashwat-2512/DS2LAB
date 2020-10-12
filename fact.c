#include <stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);

}
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    printf("\nFact of %d=%d",n,fact(n));
    return 0;
}
