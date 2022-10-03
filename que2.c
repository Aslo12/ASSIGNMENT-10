
// function to calculate simple interest  (TSRS)
#include<stdio.h> 
si(int , int, int);
int main()
{
  int a,b,c;
  printf("Enter principle rate  & time\n");
  scanf("%d%d%d",&a,&b,&c);
 si(a,b,c);
 printf("%f ",si);
 return 0;
  
}
int si(int p ,int r, int t)
{
  float s=(p*r*t)/100.0;
 // printf("%f",s);
    return 0;
}