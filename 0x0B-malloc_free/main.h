#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c);
void print_grid(int **grid, int width, int height);
void simple_print_buffer(char *buffer, unsigned int size);
char *_strdup(char *str);
int main(void);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void print_grid(int **grid, int width, int height);
void free_grid(int **grid, int height);
void print_grid(int **grid, int width, int height);
int _putchar(char c);
#endif
