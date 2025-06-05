#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// pgm파일의 구성요소
typedef struct image {
    char header1[100];
    char header2[100];
    int width;
    int height;
    int maxVal;
    unsigned char **img;
}IMAGE;

void see_pgm(const char *path, const char *name);
void fopen_check(FILE *fp, const char *name);
void read_pgm(FILE *fp, IMAGE *img);
void copy_pgm(IMAGE *input, IMAGE *output);
void write_pgm(FILE *fp, IMAGE *img);
