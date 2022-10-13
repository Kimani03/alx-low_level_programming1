#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void _putchar(char *c);
void print_name(char *name, void (*f)(char *));
void array_iterarator(int *array, int size, int (*cmp)(int));

#endif /*FUNCTION_POINTERS_H*/
