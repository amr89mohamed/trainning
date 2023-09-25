#include <stdio.h>
int main (void)
{
  char latt;
  for (latt = 'a'; latt <= 'z'; latt++)
    {
      if (latt != 'e'&& latt != 'q')
	putchar(latt);
    }
  putchar('\n');
  return (0);
}
