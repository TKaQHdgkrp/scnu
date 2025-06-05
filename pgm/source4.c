#include "my_pgm.h"

void read_pgm(FILE *fp, IMAGE *img) {
    fgets(img -> header1, 100, fp);
    fgets(img -> header2, 200, fp);
    fscanf(fp, "%d %d", &img -> width, &img -> height);
    fscanf(fp, "%d", &img ->maxVal);
    
    memory_allocation(img);

    for(int i = 0; i < img -> height; i++) {
        for(int j = 0; j < img -> width; j++) {
            fscanf(fp, "%d", &img -> img[i][j]);
        }
    }
}
