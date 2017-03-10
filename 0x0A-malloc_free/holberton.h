#ifndef HEADERFILE_H
#define HEADERFILE_H
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
unsigned int _strlen(char *s);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
unsigned int total_len(int ac, char **av);
unsigned sum_length(char **av);
void copy_strings(char **av, char*s);
void copy_str(char *f, char *t);
#endif
