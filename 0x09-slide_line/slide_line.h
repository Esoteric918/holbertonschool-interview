#ifndef SLIDE_LINE_H
#define SLIDE_LINE_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <limits.h>
#define SLIDE_LEFT 0
#define SLIDE_RIGHT 1

int slide_line(int *line, size_t size, int direction);
void mergeRight(int * line, size_t size);
void mergeLeft(int * line, size_t size);
void slideRight(int * line, size_t size);
void slideLeft(int * line, size_t size);

#endif /* SLIDE_LINE_H */
