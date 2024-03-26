// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

// V3
void converting(void) {
    printf("**** Start of Converting Strings to long Demo ****\n");
    char    longString[BUFFER_SIZE];
    int     longNumber;
    do {
        printf("Type an int numeric string (q - to quit):\n");
        fgets(longString, BUFFER_SIZE, stdin);
        longString[strlen(longString) - 1] = '\0';
        if (strcmp(longString, "q") != 0) {
            longNumber = atoi(longString);
            printf("Converted number is %d\n", longNumber);
        }
    } while (strcmp(longString, "q") != 0);
    printf("**** End of Converting Strings to long Demo ****\n");
}
