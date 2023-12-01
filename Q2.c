#include <stdio.h>
#include <math.h>

int main() {
    int mses;
    double aporte, tx;

    scanf("%d", &mses);
    scanf("%lf", &aporte);
    scanf("%lf", &tx);

    double montante = 0.0;

    for (int i = 1; i <= mses; i++) {
        montante = aporte * (1 + tx);
        montante *= (pow((1 + tx), i) - 1) / tx;

        printf("Montante total fim do mes %d: R$ %.2f\n", i, montante);
    }

    return 0;
}
