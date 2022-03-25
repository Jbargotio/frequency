#include <stdio.h>
/**
 * print_array:printing elements of an array
 */
void print_array (int *a, int n)
{
	/* a loop to loop through the array using pointers
	 * The pointer a starts by holding the address of the first element
	 * The value printed out is for each address after each loop
	 */
	int i;
	for (i= 0; i < n;i++)
	{
		printf("%d", *(a+i));
		/*check to prevent the comma and space from being printed after last element*/
		if (i != n-1)
		{
			printf(", ");
		}
		
	}
	printf("\n");
}
int main(void)
{
	    int array[5];

	        array[0] = 98;
		    array[1] = 402;
		        array[2] = -198;
			    array[3] = 298;
			        array[4] = -1024;
				    print_array(array, 5);
				        return (0);
}
