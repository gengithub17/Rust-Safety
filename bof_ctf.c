#include <stdio.h>
#include <string.h>

void flag() {
    printf("Congratulations! You've called the flag function!\n");
}

void vulnerable(char *input) {
    char buffer[64];
    strcpy(buffer, input);
    printf("Buffer content: %s\n", buffer);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }
    vulnerable(argv[1]);
    return 0;
}
