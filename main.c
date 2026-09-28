#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float h,r,A,litros,qtdlatas,custo;
	
	
	printf("digite a altura");
	scanf("%f",&h);
	
	printf("digite o raio:");
	scanf("%f",&r);
	
	A = 3.14*r*2*(r+h);
	
	litros=A/3;
	
	qtdlatas=litros/5;
	
	printf("Quantidade de latas: %f", qtdlatas);
	
	custo=qtdlatas*20;
	
	printf("Custo: %f", custo);
	
	return 0;
}