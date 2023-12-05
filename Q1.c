#include <stdio.h>
#include <string.h>

int vRomano(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int RomPDecimal(char *numRo) {
    int result = 0;
    int i;


    for (i = 0; i < strlen(numRo); i++) {


        int VAtual = vRomano(numRo[i]);
        int VProx = (i < strlen(numRo) - 1) ? vRomano(numRo[i + 1]) : 0;
        
        if (VAtual < VProx) {
            result -= VAtual;
        } else {
            result += VAtual;
        }
    }

    return result;
}

void PrintBin(int decimal) {


    printf(" na base 2: ");
    int flag = 0;
    for (int i = 11; i >= 0; i--) {
        int bit = (decimal >> i) & 1;
        if (bit == 1 || flag == 1) {
            printf("%d", bit);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("0");
    }
    printf("\n");
}



int main() {
    char numRo[13];
    scanf("%s", numRo);

    int decimal = RomPDecimal(numRo);

    printf("%s", numRo);
    PrintBin(decimal);

    printf("%s na base 9: %d\n", numRo, decimal);

    printf("%s na base 16: %x\n", numRo, decimal);

    return 0;
}