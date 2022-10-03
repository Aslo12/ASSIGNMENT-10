//function to print first N natural numbers (TSRN)
#include<stdio.h>
int fun(int n)
{
    int i;
    for(i=1; i<=n; i++)
    printf("%d ",i);
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