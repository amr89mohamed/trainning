#include <stdio.h>
int main(void)
{
  int i =0 ;
  while (i <= 9)
    {
      putchar((i %10) + '0');
      if (i >= 9)
	break;
      putchar(',');
      putchar(' ');
i++;
  	}
  putchar('\n');
  return (0);
}
