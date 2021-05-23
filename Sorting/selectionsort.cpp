#include <stdio.h>
int main()
{
  int n, c, d, pos, t;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);
  for (c = 0; c < (n-1); c++) 
  {
    pos = c;
    for (d = c+1; d < n; d++)
    {
      if (arr[pos] >arr[d])
        pos = d;
    }
    if (pos!= c)
    {
      t = arr[c];
      arr[c] = arr[pos];
      arr[pos] = t;
      for (int g = 0; g < n; g++)
     printf("%d ", arr[g]);
      printf("\n");
    }
  }
  printf("Sorted list in ascending order:\n");
  for (c = 0; c < n; c++)
    printf("%d\n", arr[c]);
  return 0;
}

