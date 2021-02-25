#include <stdio.h>

int findGCF(int x, int y) {
	int i, max = 1;

	for(i = 1; i <= x && i <= y; i++) {
		if (x % i == 0 && y % i == 0 && i > max) {
			max = i;
		}
	}

	return max;
}

int main () {
	int x, y;
	int result;

	scanf("%d %d", &x, &y);
	result = findGCF(x, y);

	printf("GCF: %d", result);
	return 0;
}
