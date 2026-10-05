#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utils.h"

int readInt(const char *prompt)
{
    int value;
    char ch;
    while (1)
    {
        printf("%s", prompt);
        if (scanf("%d", &value) == 1)
        {
            while ((ch = getchar()) != '\n' && ch != EOF);
            return value;
        }
        else
        {
            printf("[!] Invalid input. Please enter a whole number.\n");
            while ((ch = getchar()) != '\n' && ch != EOF);
        }
    }
}

double readNonNegativeDouble(const char *prompt)
{
    double value;
    char ch;
    while (1)
    {
        printf("%s", prompt);
        if (scanf("%lf", &value) == 1)
        {
            while ((ch = getchar()) != '\n' && ch != EOF);
            if (value < 0.0)
                printf("[!] Amount cannot be negative. Try again.\n");
            else
                return value;
        }
        else
        {
            printf("[!] Invalid input. Please enter a number.\n");
            while ((ch = getchar()) != '\n' && ch != EOF);
        }
    }
}

void readNonEmptyString(const char *prompt, char *buffer, int size)
{
    while (1)
    {
        printf("%s", prompt);
        if (fgets(buffer, size, stdin) == NULL)
        {
            printf("[!] Input error. Try again.\n");
            continue;
        }
        trimNewline(buffer);
        if (isEmpty(buffer))
            printf("[!] Input cannot be empty. Try again.\n");
        else
            return;
    }
}

int readYesNo(const char *prompt)
{
    char line[16];
    while (1)
    {
        printf("%s", prompt);
        if (fgets(line, sizeof(line), stdin) == NULL) continue;
        trimNewline(line);
        if (line[0] == 'y' || line[0] == 'Y' || line[0] == '1') return 1;
        if (line[0] == 'n' || line[0] == 'N' || line[0] == '0') return 0;
        printf("[!] Please enter y or n.\n");
    }
}

void printSeparator(void)
{
    int i;
    for (i = 0; i < 60; i++) putchar('=');
    putchar('\n');
}

void printHeader(const char *title)
{
    printf("\n");
    printSeparator();
    printf("  %s\n", title);
    printSeparator();
}

void pauseScreen(void)
{
    int ch;
    printf("\nPress Enter to continue...");
    while ((ch = getchar()) != '\n' && ch != EOF);
}


void trimNewline(char *str)
{
    str[strcspn(str, "\n")] = '\0';
}

int isEmpty(const char *str)
{
    int i;
    if (str == NULL || str[0] == '\0') return 1;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t' &&
            str[i] != '\r' && str[i] != '\n')
            return 0;
    }
    return 1;
}