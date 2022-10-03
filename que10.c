//function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int fun(int n,int digit)
{
    int rem;
    while(n)
    {
        rem=n%10;
        if(rem==digit)
        {
        return 1;
        n=n/10;
        }
    }
    return 0;

}
int main()
{
    int n, digit;
    printf("enter number && and digit\n");
    scanf("%d %d",&n,&digit);
     fun(n,digit);
     return 0;
}