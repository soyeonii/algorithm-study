#include <stdio.h>

int main() {
	int n, i, j;
	char filename[50][51], result[51] = { 0 };

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%s", filename[i]);

	for (i = 0; filename[0][i] != '\0'; i++) {
		for (j = 0; j < n - 1; j++) {
			if (filename[j][i] != filename[j + 1][i]) {
				result[i] = '?';
				break;
			}
		}
		if (result[i] != '?')
			result[i] = filename[0][i];
	}

	printf("%s\n", result);

	return 0;
}