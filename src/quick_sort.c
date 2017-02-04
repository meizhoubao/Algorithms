#include "quick_sort.h"

static inline int partition(int a[], int p, int q)
{
	int x = a[p];
	int i = p, j = p, tmp;
	for (j = j + 1; j <= q; j++) {
		if (a[j] < x) {
			a[i] = a[j];
			a[j] = a[++i];
			a[i] = x;
		}
	}
	return i;
}

void quick_sort_1(int a[], int p, int q)
{
	int k;
	if (p < q) {
		 k = partition(a, p, q);
		 quick_sort_1(a, p, k-1);
		 quick_sort_1(a, k+1, q);
	}
}
