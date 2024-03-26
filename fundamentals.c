// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include"fundamentals.h"
// V2
void fundamentals(void) {
    printf("**** Start of Measuring Strings Demo ****\n");
    char buffer2[BUFFER_SIZE];
    do {
        printf("Type a string (q - to quit):\n");
        fgets(buffer2, BUFFER_SIZE, stdin);
        buffer2[strlen(buffer2) - 1] = '\0';
        if (strcmp(buffer2, "q") != 0) {
            printf("The length of '%s' is %d characters\n", buffer2, (int)strlen(buffer2));
        }
    } while (strcmp(buffer2, "q") != 0);
    printf("**** End of Measuring Strings Demo ****\n");
}