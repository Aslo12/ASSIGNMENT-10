//function to print first N odd natural numbers .(TsRN)
#include<stdio.h>
int fun(int n)
{
    int i;
    for(i=1; i<=2*n; i=i+2)
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