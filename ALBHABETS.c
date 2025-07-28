#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int vowels = 0, consonants = 0, symbols = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        } else if (ch == '.' || ch == ',' || ch == '!' || ch == '?' || ch == ';' || ch == ':') {
            symbols++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nSpecific symbols: %d\n", symbols);

    return 0;
}
