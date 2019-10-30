#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int
main (int argc, char *argv[]) {
    srand(time(NULL));

    int cap = 0;
    for (int i = 1; i < argc; ++i) {
        for (char *curr = argv[i]; *curr != '\0'; ++curr) {
            if (((cap++)+rand())%2) {
                if (*curr >= 'a' && *curr <= 'z') {
                    *curr = *curr - 'a' + 'A';
                } 
                else if (*curr >= 'A' && *curr <= 'Z') {
                    *curr = *curr - 'A' + 'a';
                }
            }    
            printf("%c", *curr);
        }
        printf(" ");
    }
    printf("\b\n");
}