#include <stdio.h>

void input_string(char *a)
{
  printf("Enter the string:\n");
  scanf("%s", a);
}

int str_reverse(char *a)
{
  int b;
  for(int i=0;a[i]!='\0';i++)
    {
      b=i;
    }
 
  return b;
}

void output(char *a, int reverse_a)

{
  printf("reverse string is ");
  for(int b=reverse_a;b>=0;b--)
    printf("%c",a[b]);  
  
}

int main()
{
  char a[100];
  input_string(a);
  int b;
 
  b=str_reverse(a);
  output(a,b);
  return 0;
}

