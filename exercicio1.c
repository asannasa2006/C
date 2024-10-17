#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int seg, min, hr;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &seg);

    min = seg / 60;
    hr = seg / 3600;

    printf("O evento durou %d minutos e %d horas.\n", min, hr);

    return 0;
}