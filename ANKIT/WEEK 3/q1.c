#include <stdio.h>
#include <string.h>

void rmv_char(char *str, char c) {
    int i, j = 0;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char c;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("Enter a character to remove: ");
    scanf("%c", &c);

    rmv_char(str, c);

    printf("The new string: %s\n", str);

    return 0;
}
