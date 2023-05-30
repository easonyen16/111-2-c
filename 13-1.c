#include <stdio.h>
#include <string.h>

// Helper function to compute parity and to print the binary representation
int computeParity(int num, int *binary, int *len) {
    int parity = 0;
    int count = 0;
    while(num) {
        binary[count] = num % 2;
        parity ^= binary[count];
        num /= 2;
        count++;
    }
    *len = count;
    return parity;
}

int main() {
    int number;
    char command[5];
    while(scanf("%d", &number) && number) {
        scanf("%s", command);
        int binary[32];
        int len;
        int parity = computeParity(number, binary, &len);
        int checkBit;
        if (strcmp(command, "even") == 0) {
            checkBit = parity;
        } else {
            checkBit = 1 - parity;
        }
        printf("The %s parity of %d is %d such that ", command, number, checkBit);
        for(int i = len - 1; i >= 0; i--) {
            printf("%d", binary[i]);
            if (i > 0) {
                printf("^");
            }
        }
        printf("^%d = %d.\n", checkBit, parity ^ checkBit);
    }
    return 0;
}
