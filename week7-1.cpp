#include <stdio.h>
int fact = 1;
int n;
int fac(int c)
{
  for (c = 1; c <= n; c++)
    fact = fact * c;
}
int main()
{
  printf("Enter a number = ");
  scanf("%d", &n);
  fac(n);
  printf("%d! = %d\n", n, fact);

  return 0;
}