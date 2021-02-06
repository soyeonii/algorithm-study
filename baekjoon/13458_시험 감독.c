#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, *a, b, c, i;
	long long supervisor;

	scanf("%d", &n);
	a = (int *)malloc(sizeof(int) * n);
	supervisor = n;

	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	scanf("%d %d", &b, &c);

	for (i = 0; i < n; i++) {
		int rest = a[i] - b;
		if (rest > 0) {
			supervisor += rest / c;
			if (rest % c != 0)
				supervisor++;
		}
	}
	free(a);

	printf("%lld\n", supervisor);

	return 0;
}