#include <stdio.h>
int main (void)
{
  int num = '0';
  while (num <= '9')
    {
      putchar(num);
      num++;
    }
  putchar('\n');
  return (0);
}
