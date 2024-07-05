#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p = malloc(sizeof(int) * 100);
	
	for (int i = 0; i < 101; i++) {
		p[i] = i;
	}
	
	return 0;
}