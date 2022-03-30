#include <stdio.h>

int input_array_size()
{
  int length;
  printf("Enter the length of the array:\n");
  scanf("%d", &length);
  return length;
}

void input_array(int n, int a[n])
{
  printf("Enter all values of the array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}
int sum_composite_numbers(int n, int a[n])
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    int t=0;
    for(int j=2;j<a[i];j++)
      {
        if((a[i]%j)==0)
          t++;
      }
    if(t!=0)
      sum=sum+a[i];
    }
  return sum;
  }
void output(int sum)
{
  printf("%d\n", sum);
}

int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
    return 0;
}