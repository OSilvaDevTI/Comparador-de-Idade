#include <stdio.h>
float calc(float rt, float ce){
	if (rt < 0 || ce < 0)
	{
		printf("Valor invalido. Tente novamente.");
		return 0;
	}
	else
	{
		float form = rt * ce;
		return form;
	}
}

int main(){
	float resis, cE, resul;
	
	printf("Digite o valor da resistencia: ");
	scanf("%f", &resis);
	printf("Digite o valor da corrente eletrica: ");
	scanf("%f", &cE);
	
	resul = calc(resis, cE);
	
	if (resul > 0) 
		printf("Resultado: %.2f", resul);
		
	return 0;
}
