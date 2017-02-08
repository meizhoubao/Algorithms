#include <stdio.h>
#include "quick_sort.h"

#define output(A, N) { \
	for (i = 0; i < N; i++) {printf("%d ", A[i]);} \
	printf("\n"); \
}

void main(void)
{
	int a[8] = {6, 10, 13, 5, 8, 3, 2, 11};
	int b[8] = {8, 3, 8, 8, 9, 10, 2, 1};
	int c[13] = {4,23,76,24,55,100,6,41,39,18,89,100,70}; 
	int i;
	
	// test for quick_sort_1
	output(a, 8);
	quick_sort_1(a, 0, 7);
	output(a, 8);
	
	// test for quick_sort_2
	output(b, 8);
	quick_sort_2(b, 0, 7);
	output(b, 8);

	// test for quick_sort_3
	output(c, 13);
	quick_sort_3(c, 0, 12);
	output(c, 13);
}
