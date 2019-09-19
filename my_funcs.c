#include <stdio.h>
#include <stdlib.h>

int give_root();
int give_root() {
    printf("its not that easy!\n");
    exit(0);
};

void checkpassword(const char* str);
void checkpassword(const char* str) {
    int i = 0;
    const char* password = "password123";

    for (i = 0; i < 20; ++i) {
        if (str[i] != password[i]) {
            give_root();
            return;
        }
    }

    printf("with great power comes great responsibiliity!");

}
