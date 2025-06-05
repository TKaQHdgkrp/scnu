#include "my_pgm.h"

void memory_allocation(IMAGE *img) {
    img -> img = (unsigned char **)malloc(sizeof(unsigned char *) * img -> height);
    for(int i = 0; i < img -> height; i++) {
        img -> img[i] = (unsigned char *)malloc(sizeof(unsigned char) * img -> width);
    }
}
