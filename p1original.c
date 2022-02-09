#include<stdio.h>
void input( float *base, float *height)
{
  printf("Enter the value for base and height of triangle\n");
  scanf("%f%f",base,height);
}
void find_area(float base, float height,float *area)
{
  *area=(base*height)/2.0;
}
void output(float base, float height, float area)
{
  printf("area of triangle is (%f%f)=%f",base,height,area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;
}