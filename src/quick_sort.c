#include "quick_sort.h"

// My solution for PARTITION
static inline int partition_1(int a[], int p, int q)
{
	int x = a[p];
	int i = p, j = p;
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
		 k = partition_1(a, p, q);
		 quick_sort_1(a, p, k-1);
		 quick_sort_1(a, k+1, q);
	}
}

// MIT 6.046J course solution
static inline int partition_2(int a[], int p, int q)
{
	int x = a[p];
	int i = p, j, tmp;
	for (j = i + 1; j <= q; j++) {
		if (a[j] <= x) {
			tmp = a[j];
			a[j] = a[++i];
			a[i] = tmp;
		}
	}
	a[p] = a[i];
	a[i] = x;
	return i;
}

void quick_sort_2(int a[], int p, int q)
{
	int k;
	if (p < q) {
		k = partition_2(a, p, q);
		quick_sort_2(a, p, k-1);
		quick_sort_2(a, k+1, q);
	}
}

static inline int partition_3(int a[], int p, int q)
{
	int x = a[q];
	int i = p - 1, j, tmp;
	for (j = p; j < q; j++) {
		if (a[j] <= x) {
			tmp = a[j];
			a[j] = a[++i];
			a[i] = tmp;
		}
	}
	a[q] = a[++i];
	a[i] = x;
	return i;
}

void quick_sort_3(int a[], int p, int q)
{
	int k;
	if (p < q) {
		k = partition_3(a, p, q);
		quick_sort_3(a, p, k-1);
		quick_sort_3(a, k+1, q);
	}
}
