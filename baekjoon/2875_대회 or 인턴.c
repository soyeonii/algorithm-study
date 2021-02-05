#include <stdio.h>

int main() {
	int n, m, k, i;
	int number_of_teams = 0;

	scanf("%d %d %d", &n, &m, &k);

	if (n / 2 >= m)
		number_of_teams = m;
	else
		number_of_teams = n / 2;

	k -= n + m - number_of_teams * 3;

	if (k > 0) {
		number_of_teams -= k / 3;
		if (k % 3 != 0)
			number_of_teams--;
	}

	printf("%d\n", number_of_teams);

	return 0;
}