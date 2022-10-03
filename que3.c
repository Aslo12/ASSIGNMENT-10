/*function to check whether a given number is even or odd.
 Return 1 if the number is even , otherwise return 0.(TsRs) */
#include<stdio.h>
int fun(int n)
{
    if(n%2==0)
    return 1;
    else
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