#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	int n, i;

	n = 5;
	printf("Enter number of elements: %d\n", n);

	ptr = (int*)calloc(n, sizeof(int));

	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	
	printf("Memory successfully allocated using calloc.\n");
	for (i = 0; i < n; ++i) {
		ptr[i] = i + 1;
	}
	printf("The elements of the array are: ");
	for (i = 0; i < n; ++i) {
		printf("%d ", ptr[i]);
	}
	n = 10;
	printf("\n\nEnter the new size of the array: %d\n", n);
	ptr = (int*)realloc(ptr, n * sizeof(int));
	printf("Memory successfully re-allocated using realloc.\n");
	for (i = 5; i < n; ++i) {
	    ptr[i] = i + 1;
	}
	printf("The elements of the array are: ");
	for (i = 0; i < n; ++i) {
		printf("%d ", ptr[i]);
	}
		free(ptr);


	return 0;
}
/*
Enter number of elements: 5
Memory successfully allocated using calloc.
The elements of the array are: 1 2 3 4 5 

Enter the new size of the array: 10
Memory successfully re-allocated using realloc.
The elements of the array are: 1 2 3 4 5 6 7 8 9 10 
*/
