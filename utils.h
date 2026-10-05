#ifndef UTILS_H
#define UTILS_H

int    readInt(const char *prompt);
double readNonNegativeDouble(const char *prompt);
void   readNonEmptyString(const char *prompt, char *buffer, int size);
int    readYesNo(const char *prompt);

void   printSeparator(void);
void   printHeader(const char *title);
void   pauseScreen(void);

void   trimNewline(char *str);
int    isEmpty(const char *str);

#endif 