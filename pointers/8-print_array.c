#include <stdio.h>
/**
 * print_array:printing elements of an array
 */
void print_array (int *a, int n)
{
	// a loop to loop through the array using pointers
	// The pointer a starts by holding the address of the first element
	// The value printed out is for each address after each loop
	int i;
	for (i= 0; i < n;i++)
	{
		printf("%d", *(a+i));
		//check to prevent the comma and space from being printed after last element
		if (i != n-1)
		{
			printf(", ");
		}
	}
}
