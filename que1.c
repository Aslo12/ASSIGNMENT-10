//function to calculate the area of a circle (tsrs)
#include<stdio.h>
float area(int r)
{
 float s=3.14*r*r;
 printf("%2f ",s);
    return 0;
}
int main()
{
  int n;

  printf("Enter RADIUS OF CIRCLE\n");
  scanf("%d", &n);
  area(n);
  return 0;

}