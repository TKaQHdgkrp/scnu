#include "my_pgm.h"

void see_pgm(const char *path, const char *name) {
    char apath[200] = {0, };
    strcat(apath, path);
    strcat(apath, " ");
    strcat(apath, name);
    system(apath);
}
