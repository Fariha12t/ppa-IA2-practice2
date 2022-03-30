#include <stdio.h>
int input_number()
{
  int x;
  printf("Enter a number\n");
  scanf("%d",&x);
  return x;
}
int is_composite(int n)
{
  int i,count=0;
  for(i=1;i<=n;i++)
    {
      if(n%i==0)
        count++;
    }
  return count;
}
void output(int n, int composite)
{
  if (composite>2)
    printf("%d is a composite number\n",n);
  else 
    printf("%d is not a composite number\n",n);
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}