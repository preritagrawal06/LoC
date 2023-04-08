#include <stdio.h>
#include <string.h>

void remove_char(char *str, char c);

int main() {
    char str[100], c;
    int i = 0;
    printf("Enter a string: ");
    while ((c = getchar()) != '\n' && i < sizeof(str) - 1) {
        str[i++] = c;
    }
    str[i] = '\0';
    printf("Enter the character to remove: ");
    scanf("%c", &c);
    remove_char(str, c);
    printf("String after removing '%c': %s", c, str);
    return 0;
}

void remove_char(char *str, char c) {
    int i, j;
    int len = strlen(str);
    for (i = j = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
