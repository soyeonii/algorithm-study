#include <stdio.h>

int main() {
	int n, m, spaces;

	scanf("%d %d", &n, &m);

	if (n == 1) {
		spaces = 1;
	}
	else if (n == 2) {
		if (m <= 8)
			spaces = (m + 1) / 2;
		else
			spaces = 4;
	}
	else {
		if (m <= 4)
			spaces = m;
		else if (m >= 7)
			spaces = m - 2;
		else
			spaces = 4;
	}

	printf("%d\n", spaces);

	return 0;
}