#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<500; i++) {
	for (int j=1; j<500; j++) {
	    if (i*i == j*j + n)
		printf("(%d, %d)\n", i, j);
	}
    }

    return 0;
}
