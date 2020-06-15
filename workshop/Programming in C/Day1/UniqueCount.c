#include <stdio.h>

int main ()
{
  int c = 1, n;
  int arr[99];
  scanf ("%d", &n);
  for (int i = 0; i < n; i++)
    scanf ("%d", &arr[i]);
  for (int i = 1; i < n; i++)
    {
      int j = 0;
      for (j = 0; j < i; j++)
	if (arr[i] == arr[j])
	  break;
      if (i == j)
	c++;
    }
  printf ("the count of unique elements is %d", c);
  return 0;
}
