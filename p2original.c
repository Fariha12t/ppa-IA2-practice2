#include <stdio.h>
int input_side()
{
  int x;
  printf("Enter a side of the triangle:\n");
  scanf("%d", &x);
  return x;
}
int check_scalene(int a, int b, int c)
{
  if (a != b && a != c && b != c)
  {
    return 1;
  }
  return 0;
}
void output(int a, int b, int c, int isScalene)
{
  if(isScalene==1)
  {
    printf("The triangle with sides %d, %d and %d is scalene\n", a, b, c);
  }
  else
  {
    printf("The triangle with sides %d, %d and %d is not scalene\n", a, b, c);  
  }
}
int main()
{
  int a,b,c,isScalene;
  a = input_side();
  b = input_side();
  c = input_side();
  isScalene=check_scalene(a,b,c);
  output(a,b,c, isScalene);
  return 0;
}

