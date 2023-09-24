#include <stdio.h>
int main(void)
{
  char latt1, latt2;
  
  for (latt1 ='a'; latt1 <= 'z'; latt1++)
  putchar(latt1);
  for (latt2 = 'A'; latt2 <= 'Z'; latt2++)
  putchar(latt2);
  putchar('\n');
  return (0);
}
