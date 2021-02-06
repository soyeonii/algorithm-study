#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main() {
	int n, i, *time, sum = 0;

	scanf("%d", &n);
	time = (int *)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", time + i);

	qsort(time, n, sizeof(time[0]), compare);

	for (i = 0; i < n; i++)
		sum += time[i] * (n - i);

	free(time);

	printf("%d\n", sum);

	return 0;
}