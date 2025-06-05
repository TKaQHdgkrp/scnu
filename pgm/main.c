#include "my_pgm.h"

int main() {
    IMAGE oimg, nimg; // 기존 pgm파일 구성요소, 새로 만들 pgm파일 구성요소
    FILE *fp_r, *fp_w; // 읽어올 파일 포인터, 써넣을 파일 포인터
    int value, mode; // 밝기 조정값, 대칭 실행값
    float ratio; // 이미지 크기 조정값
    char fname[100]; // 읽어올 pgm파일의 이름
    char fname_new[100]; // 새로 만들 pgm파일의 이름
    char fpath[100] = "\"C:\\Program Files\\IrfanView\\i_view64.exe\""; // infanview 실행경로
    

    printf("읽어올 pgm파일의 이름을 입력하시오: ");
    scanf("%s", fname);

    printf("새로 만들 pgm파일의 이름을 입력하시오: ");
    scanf("%s", fname_new);

    see_pgm(fpath, fname);

    fp_r = fopen(fname, "r");
    fopen_check(fp_r, fname);
    
    fp_w = fopen(fname_new, "w");
    fopen_check(fp_w, fname_new);

    read_pgm(fp_r, &oimg);
    copy_pgm(&oimg, &nimg);

    write_pgm(fp_w, &nimg);

    for (int i = 0; i < oimg.height; i++) {
        free(oimg.img[i]);
    }
    free(oimg.img);

    for (int i = 0; i < nimg.height; i++) {
        free(nimg.img[i]);
    }
    free(nimg.img);

    fclose(fp_r);
    fclose(fp_w);

    see_pgm(fpath, fname_new);

    return 0;
}
