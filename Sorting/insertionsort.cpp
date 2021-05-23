#include <stdio.h>
void sort(int arr[]);
int n;
int main()
{
  int pr=0;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  int arr[n],A[n]={0},B[n]={0};
  printf("Enter %d integers\n", n);
  for (int c = 0; c <n; c++)
  scanf("%d", &arr[c]);
  	int m=0,l=0;
  for(int j=0;j<n;j++)
  {
	pr=0;
    for(int i=2;i<arr[j];i++)
    {
    	if(arr[j]==2)
    	pr=0;
    	else if(arr[j]%i==0)
    	{
    	pr=1;
		}
	}
    if(pr==0)
	{
	A[m]= arr[j];
	m++;
    }
    else
    {
    B[l]= arr[j];
    l++;
    }
    
  }
    /*for(int i=0;i<n;i++)
    printf("%d",A[i]);
    for(int i=0;i<n;i++)
    printf("%d",B[i]);*/
    sort(A);
    //printf("\n");
    sort(B);
return 0;
}

void sort(int arr[])
{
  int c, d, t, flag = 0;
  for (int c = 1; c <n ; c++) 
  {
    t = arr[c];
    for (d = c-1; d >= 0; d--) 
	{
      if (arr[d]> t) 
	  {
        arr[d+1] = arr[d];
        flag = 1;
      }
      else
      break;
    }
    
   if (flag==1)
     arr[d+1] = t;
  }
  for (c = 0; c <= n - 1; c++) 
  {
    if(arr[c]!=0)
	printf("%d ", arr[c]);
  }
}
  


