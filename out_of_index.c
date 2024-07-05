#include <stdio.h>

int fixed_length(){
	printf("Fixed length\n");
	int buf_a[5];
	int buf_b[5];
	buf_a[0] = 0;
	// buf_b[5] = 5; // warning

	printf("buf_a address: %p\n", buf_a);
	printf("buf_b address: %p\n", buf_b);

	for (int i = 0; i < 6; i++) {
		buf_b[i] = i;
		printf("buf_b[%d]: %d\n", i, buf_b[i]);
	}
	printf("Done\n");

	printf("buf_a[0]: %d\n", buf_a[0]);

	return 0;
}

int variable_length(){
	printf("Variable length\n");
	// int buflen = 5;
	int buflen = 15;
	int buf_a[buflen];
	int buf_b[buflen];
	buf_a[0] = 0;

	printf("buf_a address: %p\n", buf_a);
	printf("buf_b address: %p\n", buf_b);

	for (int i = 0; i < buflen + 1; i++) {
		buf_b[i] = i;
		printf("buf_b[%d]: %d\n", i, buf_b[i]);
	}
	printf("Done\n");

	printf("buf_a[0]: %d\n", buf_a[0]);

	return 0;
}

int main() {
	// fixed_length();
	variable_length();
	return 0;
}
