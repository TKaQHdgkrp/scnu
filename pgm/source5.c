#include "my_pgm.h"

void copy_pgm(IMAGE *input, IMAGE *output) {
    strcpy(output -> header1, input -> header1);
    strcpy(output -> header2, input -> header2);
    output -> width = input -> width;
    output -> height = input -> height;
    output -> maxVal = input -> maxVal;

    memory_allocation(output);

    for(int i = 0; i < input -> height; i++) {
        for(int j = 0; j < input -> width; j++) {
            output -> img[i][j] = input -> img[i][j];
        }
    } 
}
