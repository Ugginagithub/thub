#include<stdio.h>
void main()
{
	// Declration of lenght of the array
	int n;
	
	// Reading the length of array from user
	scanf("%d", &n); // 4
	
	// Declaring the array sized n
	int arr[n], i; // arr[4]
	
	// Reading array elements from user
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]); // -1 14 167 -16
	}
	
	printf("Array elements before reversing\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	// Printing array element before reversing
	
	
	// Reverse the given array using a new array of same size
	int rev[n], j; // 10 20 30 40 50
				//    0  1  2  3  4
	for(i=n-1, j=0; i>=0; i--, j++)//i=0, j=4; 4>=0;
	{
		rev[j] = arr[i];
	//  rev[4] = arr[0]
	}
	
	
	// Printing reversed array elements
	printf("\n Array after reversal\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", rev[i]);
	}
}

















