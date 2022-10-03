//function to calculate the factorial of a number.(TSRs)
#include<stdio.h>
int fun(int n)
{
    int i,fact=1;
    for(i=1; i<=n; i++)
    {
    fact=fact*i;
    }
    printf(" factorial is :%d ",fact);
    return 0;

}
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    fun(n);
    return 0;

}