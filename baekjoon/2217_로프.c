#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main() {
	int n, *weight, i, max;

	scanf("%d", &n);
	weight = (int *)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", weight + i);

	qsort(weight, n, sizeof(weight[0]), compare);

	max = weight[0] * n;

	for (i = 1; i < n; i++)
		if (max < weight[i] * (n - i))
			max = weight[i] * (n - i);

	free(weight);

	printf("%d\n", max);

	return 0;
}