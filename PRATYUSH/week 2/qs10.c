#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    int alphabets = 0, digits = 0, special_chars = 0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i])) {
            alphabets++;
        } else if (isdigit(string[i])) {
            digits++;
        } else {
            special_chars++;
        }
    }

    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special_chars);

    return 0;
}
