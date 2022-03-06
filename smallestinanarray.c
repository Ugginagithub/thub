#include<stdio.h>
void main()
{
	// Declration of lenght of the array
	int n;
	
	// Reading the length of array from user
	scanf("%d", &n); // 4
	
	// Declaring the array sized n
	int arr[n], i, min; // arr[4]
	
	// Reading array elements from user
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]); // -1 14 167 -16
	}
	
	
	// Finding out the largest element in the given array
	min = arr[0]; //max = arr[0] = -1
	for(i=1; i<n; i++)//i=4
	{
		if(arr[i] < min)// arr[3] < min; -16 < -1
		{
			min = arr[i]; //min = arr[i] ; min = arr[3] = -16
		}
	}
	
	printf("%d", min);
	
}

