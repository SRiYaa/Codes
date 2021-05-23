#include <stdio.h>
//With Recursion
void reverse(int arr[], int low, int high)
{
	if (low < high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;

		reverse(arr, low + 1, high - 1);
	}
}
int main(void)
{
	int arr[5];
	printf("Enter the 5 elements of stack\n");
	for(int i=4;i>=0;i--)
	scanf("%d",&arr[i]);
	printf("Displaying stack\n");
	for(int i=0;i<5;i++)
	printf("%d\n",arr[i]);
	int n = sizeof(arr)/sizeof(arr[0]);
	reverse(arr, 0, n-1);
	printf("Displaying reversed stack\n");
	for (int i = 0; i < n; i++) 
	printf("%d \n", arr[i]);
	return 0;
}
