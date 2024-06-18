#include "my.h"

int main(void)
{
    int i, x, y;
    float r;

    i = select_menu();
    get_operand(&x, &y);
    r = arithm_op(i, x, y);
    print_result(r);

    return 0;
}

int plus(int x, int y) {
    int p;
    p = x + y;
    return p;
}

int minus(int x, int y) {
    int m;
    m = x - y;
    return m;
}

int multiple(int x, int y) {
    int m2;
    m2 = x * y;
    return m2;
}

float division(float x, float y) {
    float d;
    d = x / y;
    return d;
}

int select_menu()
{
    int i;
    do {
        printf("select calculator\n");
        printf("  1---add\n");
        printf("  2---sub\n");
        printf("  3---mul\n");
        printf("  4---div\n");
        scanf("%d", &i);
    } while (i < 1 || i > 4);
    return i;
}

void get_operand(int *x, int *y) {

    int num;

    printf("Enter the first integer: ");
    scanf("%d", &num);
    *x = num;

    printf("Enter the second integer: ");
    scanf("%d", &num);
    *y = num;
}

float arithm_op(int i, int x, int y)
{
    float result; 

    switch(i)
    {
    case 1:
        result = plus(x, y);
        break;
    case 2:
        result = minus(x, y);
        break;
    case 3:
        result = multiple(x, y);
        break;
    case 4:
        result = division(x, y);
        break;
    }
    return result;
}

void print_result(float r) {
    printf("result : %lf ", r);
}