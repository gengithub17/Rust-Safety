// Buffer overflow example

#include <stdio.h>
#include <string.h>

int input_overflow(){
	char buffer[5];
	printf("Enter a string: ");
	// fgets(buffer, sizeof(buffer), stdin);
	fgets(buffer, 100, stdin);
	printf("You entered: %s\n", buffer);
	return 0;
}
// 入力文字が長いとsefment fault

int str_overflow(){
	int buflen = 8;
	// char buf_a[] = "ABCDEFG\0";
	char buf_a[buflen];
	char buf_b[buflen];
	// char buf_b[8];
	// char buf_c[] = "ABCDEFG\0";
	char buf_c[buflen];
	strcpy(buf_a, "ABCDEFG\0");
	strcpy(buf_c, "ABCDEFG\0");

	printf("buf_a: %s\n", buf_a);

	printf("buf_a address: %p\n", buf_a);
	printf("buf_b address: %p\n", buf_b);
	printf("buf_c address: %p\n", buf_c);
	// strcpy(buf_b, "abcdefg");
	// strcpy(buf_b, "abcdefghijklmnopqrstuvwxyz");
	strcpy(buf_b, "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz");

	printf("buf_a: %s\n", buf_a);
	printf("buf_b: %s\n", buf_b);
	printf("buf_c: %s\n", buf_c);

	return 0;
}

int main(){
	// input_overflow();
	str_overflow();
	return 0;
}
