#include <stdio.h>
float IMC(float peso, float alt){
	float calcIMC = peso / (alt*alt);
	
	printf("Seu IMC e: %.2f\n", calcIMC);
	
	if (calcIMC <= 18.5)
		printf("IMC: Abaixo do peso");
	else if (calcIMC >= 18.6 && calcIMC <= 24.9)
		printf("IMC: Peso normal");
	else if (calcIMC >= 25 && calcIMC <= 29.9)
		printf("IMC: Sobrepeso/pre-obesidade");
	else if (calcIMC >= 30 && calcIMC <= 34.9)
		printf("IMC: Obesidade grau I");
	else if (calcIMC >= 35 && calcIMC <= 39.9)
		printf("IMC: Obesidade grau II");
	else
		printf("IMC: Obesidade grau III");
		
	return calcIMC;
}

int main(){
	float pes, alt, resul;
	
	printf("Digite o peso: ");
	scanf("%f", &pes);
	printf("Digite a altura: ");
	scanf("%f", &alt);
	
	resul = IMC(pes, alt);
	
	return 0;
}
