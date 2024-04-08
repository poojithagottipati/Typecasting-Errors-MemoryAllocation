#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	int n, i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	for (i = 0; i < n; ++i) {
		ptr[i] = i + 1;
	}
	printf("The elements of the array are: ");
	for (i = 0; i < n; ++i) {
		printf("%d ", ptr[i]);
	}
	return 0;
}
/*
Enter number of elements:5
The elements of the array are: 1 2 3 4 5
*/
