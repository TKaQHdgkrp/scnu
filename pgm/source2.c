#include "my_pgm.h"

void fopen_check(FILE *fp, const char *name) {
    if(fp == NULL) {
        printf("%s을(를) 실행하지 못했습니다\n", name);
        exit(1);
    }
    else {
        printf("%s을(를) 성공적으로 실행했습니다\n", name);
    }
}
