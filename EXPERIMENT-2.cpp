#include <stdio.h>
#include <string.h>

int main() {
    char com[31]; // Allow space for the null terminator
    int i, a = 0;
    
    printf("\nEnter comment: ");
    fgets(com, sizeof(com), stdin);
    
    // Remove newline character if present
    size_t len = strlen(com);
    if (len > 0 && com[len - 1] == '\n') {
        com[len - 1] = '\0';
    }
    
    if (com[0] == '/') {
        if (com[1] == '/') {
            printf("\nIt is a comment\n");
        } else if (com[1] == '*') {
            for (i = 2; i < len; i++) {
                if (com[i] == '*' && com[i + 1] == '/') {
                    printf("\nIt is a comment\n");
                    a = 1;
                    break;
                }
            }
            if (a == 0) {
                printf("\nIt is not a comment\n");
            }
        } else {
            printf("\nIt is not a comment\n");
        }
    } else {
        printf("\nIt is not a comment\n");
    }

    return 0;
}


