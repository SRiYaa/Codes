#include <stdio.h>
int main()
{
  int n,c,k,sp=1; 
  printf("Enter the Number of rows ");
  scanf("%d", &n);
  sp=n;
  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= sp; c++)
      printf("*");
    sp--; 
    for (c = 1; c < 2*k-1; c++)
      printf(" "); 
    for (c = n; c >= k; c--)
      printf("*"); 
    printf("\n");
  } 
  sp = 1; 
  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= sp; c++)
      printf("*"); 
    sp++; 
    for (c = 1 ; c <= 2*(n-k); c++)
      printf(" ");
    for (c = 1; c <=k; c++)
      printf("*"); 
    printf("\n");
  } 
  return 0;
}
