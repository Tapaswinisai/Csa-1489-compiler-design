#include <stdio.h>

int main() {
    char str[100] = {0}; // Initialize input string with size 100

    int words = 0, newline = 0, characters = 0; // Counter variables

    printf("Enter the string (end input with ~):\n");
    scanf("%[^~]", str); // Read input until ~ is encountered

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words++;
        } else if (str[i] == '\n') {
            newline++;
            words++; // Since with every new line, new words start
        } else if (str[i] != ' ' && str[i] != '\n') {
            characters++;
        }
    }

    // Account for the last word and line if the input is not empty
    if (characters > 0) {
        words++;
        newline++;
    }

    printf("Total number of words: %d\n", words);
    printf("Total number of lines: %d\n", newline);
    printf("Total number of characters: %d\n", characters);

    return 0;
}

