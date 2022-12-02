#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

int main(void)
{
	int arr[6],x;
    printf("Enter the elements of array \n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Enter the element you want to find \n");
    scanf("%d",&x);
	int result = binarySearch(arr, 0, n, x);
	if(result == -1)
    {
	 printf("Element is not present in array");
    }
    else
    printf("Element is present at index %d", result);
	return 0;
}
