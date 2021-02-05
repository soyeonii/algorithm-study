#include <stdio.h>

int main() {
	char n[100001];
	int num_count[10] = { 0 };
	int i, j, sum = 0;

	scanf("%s", n);

	for (i = 0; n[i] != NULL; i++) {
		int num = n[i] - '0';
		num_count[num]++;
		sum += num;
	}

	if (sum % 3 == 0 && num_count[0]) {
		for (i = 9; i >= 0; i--) {
			for (j = 0; j < num_count[i]; j++) {
				printf("%d", i);
			}
		}
		printf("\n");
	}
	else
		printf("-1\n");

	return 0;
}