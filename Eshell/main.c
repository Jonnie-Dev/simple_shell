#include "main.h"

/**
 * main - boiler plate code
 * @ac: first variable
 * @argv: second variable
 * Return: returns 0
*/

int main(int ac, char **argv)
{
char *prompt = "(User) ~$ ";
char *lineptr;
size_t n = 0;

/* declaring void variables */
(void)ac; (void)argv;

printf("%s", prompt);
getline(&lineptr, &n, stdin);
printf("%s\n", lineptr);

free(lineptr);
return (0);
}
