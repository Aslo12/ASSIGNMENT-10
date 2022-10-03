/*function to calculate the numbers of combinations ,
one can make from n items and r selected at a time.(TSRS) */

#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1; i<=n; i++)
    
    fact=fact*i;
    return fact;
}


 int perm(int n , int r)
 {
    return fact (n)/(fact(n-r));
 }
int main()
{
  printf("%d",perm(5,2));
  return 0;   
}
 
 