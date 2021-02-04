#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, k, i, count = 0, *a;

	scanf("%d %d", &n, &k);

	a = (int *)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", a + i);

	for (i = n - 1; i >= 0; i--) {
		if (k / a[i] > 0) {
			count += (k / a[i]);
			k %= a[i];
		}
		if (!k)
			break;
	}

	printf("%d\n", count);

	free(a);
}