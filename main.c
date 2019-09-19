#include <stdio.h>
#include <stdlib.h>
#include "my_funcs.c"


int main(int argc, char *argv[])
{
    printf("Hello, I am in main!");

//     for (int i = 0; i < 20; ++i) {
//         printf("%s\n", "weee!!!");
//     }
//
//     int i = 20;
//     while (i > 10) {
//         printf("loop!\n");
//         i--;
//     }
//
    int x = 3;

    int* y = &x;
    *y = 1;

    printf("%d\n", x);
    // checkpassword(str);

    return 0;
}
