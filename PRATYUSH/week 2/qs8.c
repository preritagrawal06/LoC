#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; i < strlen(string); i++) {
        char c = tolower(string[i]);

        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
