#include<stdio.h>
void main()
{
	// Declration of lenght of the array
	int n;
	
	// Reading the length of array from user
	scanf("%d", &n); // 4
	
	// Declaring the array sized n
	int arr[n], i, j, temp; // arr[4]
	
	// Reading array elements from user
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]); // -1 14 167 -16
	}
	
	// Printing array element before reversing
	printf("Array elements before reversing\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	
	
	// Reversing the array in place
	//n=6
	// 60 50 40 30 20 10
	// 0  1  2  3  4  5
	for(i=0, j=n-1; i<j; i++, j--)//i=3, j=2; 3<2
	{
		temp = arr[i]; //temp = arr[i]; arr[2] = 30
		arr[i] = arr[j]; //arr[i] = arr[j] ; arr[2] = arr[3]; arr[2] = 40
		arr[j] = temp; //arr[j] = temp; arr[3] = 30
	}
	
	
	// Printing reversed array elements
	printf("\n Array after reversal\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
}

















