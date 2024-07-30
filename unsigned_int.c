#include <stdio.h>

int main (unsigned int n) {
    unsigned int numBits = sizeof(n) * 8;
    printf("n in binary: %d\n", numBits);

    for (int i = numBits - 1; i >= 0; i--) {
        // printf("%d\n", i);
        unsigned int bit = (n >> i) & 1;

        if (i % 4 == 0 && i != 0)
        {
            printf(" ");
        }
        printf("%u", bit);
    }
        return 0;
}
