#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nTabla de clasificación del IMC:\n");
    printf("Menor a 18.5\t\tBajo peso\n");
    printf("18.5 – 24.9\t\tNormal\n");
    printf("25.0 – 29.9\t\tSobrepeso\n");
    printf("30.0 o más\t\tObesidad\n");

    printf("\nSu IMC es: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Condición: Bajo peso\n");
    } else if (imc < 25.0) {
        printf("Condición: Normal\n");
    } else if (imc < 30.0) {
        printf("Condición: Sobrepeso\n");
    } else {
        printf("Condición: Obesidad\n");
    }

    return 0;
}
