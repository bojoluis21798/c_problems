#include <stdio.h>

int findGCF(int x, int y) {
	while(x != y) {
		if (x > y) 
			x -= y;
		else
			y -= x;
	}

	return x;
}

int main () {
	int x, y;
	int result;

	scanf("%d %d", &x, &y);
	result = findGCF(x, y);

	printf("GCF: %d", result);
	return 0;
}
