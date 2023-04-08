#include <stdio.h>
#include <string.h>

void count_chars(char *str, int *freq);

int main() {
    char str[100];
    int freq[256] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    count_chars(str, freq);
    printf("Character frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }
    return 0;
}

void count_chars(char *str, int *freq) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        freq[(int) str[i]]++;
    }
}
