#include "my_pgm.h"

void write_pgm(FILE *fp, IMAGE *img) {
    fputs(img -> header1, fp);
    fputs(img -> header2, fp);
    fprintf(fp, "%d %d\n", img -> width, img -> height);
    fprintf(fp, "%d\n", img -> maxVal);
    for(int i = 0; i < img -> height; i++) {
        for(int j = 0; j < img -> width; j++) {
            fprintf(fp, "%d ", img -> img[i][j]);
        }
        fprintf(fp, "\n");
    }
}
