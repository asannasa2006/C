#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n1;

    printf("Digite um número: ");
    scanf("%d", &n1);

    if (n1 % 3 == 0 && n1 % 5 == 0)
        printf("O número %d é divisível por 3 e 5.\n", n1);
    else
        printf("O número %d não é divisível por 3 e 5.\n", n1);

    return 0;
}