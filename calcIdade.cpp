#include <stdio.h>
int comparacao(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){
	if (dia1 > dia2)
		printf("A segunda pessoa e mais velha.");
	else if(dia2 > dia1)
		printf("A primeira pessoa e mais velha");
	if (mes1 > mes2)
		printf("A segunda pessoa e mais velha");
	else if (mes2 > mes1)
		printf("A primeira pessoa e mais velha");
	if (ano1 > ano2)
		printf("A segunda pessoa e mais velha");
	else if (ano2 > ano1)
		printf("A primeira pessoa e mais velha");
}

int main(){
	int d1, d2, m1, m2, a1, a2;
	printf("Digite o dia da primeira pessoa: ");
	scanf("%d", &d1);
	printf("Digite o mes da primeira pessoa: ");
	scanf("%d", &m1);
	printf("Digite o ano da primeira pessoa: ");
	scanf("%d", &a1);
	printf("Digite o dia da segunda pessoa: ");
	scanf("%d", &d2);
	printf("Digite o mes da segunda pessoa: ");
	scanf("%d", &m2);
	printf("Digite o ano da segunda pessoa: ");
	scanf("%d", &a2);
	comparacao(d1, m1, a1, d2, m2, a2);
	return 0;
}
