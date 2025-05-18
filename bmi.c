#include <stdio.h>

int main() {
	float peso, altura, imc;
	int indice;
	
	const char *condiciones[] = {
		"Bajo peso",
			"Normal",
			"Sobrepeso",
			"Obesidad"
	};
	
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);
	
	printf("Ingrese la altura en metros: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\nSu índice de masa corporal es: %.2f\n", imc);
	
	printf("\nIndice | Condición\n");
	printf("-\n");
	printf("<18.5   Bajo peso\n");
	printf("18.5 a 24.9  Normal\n");
	printf("25.0 a 29.9  Sobrepeso\n");
	printf(">=30 Obesidad\n");
	
	indice = (imc < 18.5) * 0 +
		(imc >= 18.5 && imc < 25.0) * 1 +
		(imc >= 25.0 && imc < 30.0) * 2 +
		(imc >= 30.0) * 3;
	
	printf("\nSu condición es: %s\n", condiciones[indice]);
	
	return 0;
}
