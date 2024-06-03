#include<stdio.h>
float pesoideal(float a, char b){
	float resultado;
	if((b == 'f') || (b == 'F')){
		resultado = (62.1 * a) - 44.7;
	}else if((b == 'm') || (b == 'M')){
		resultado = (72.7 * a) - 58;
	}
	return resultado;

}
void main(){
	float altura;
	char sexo;
	printf("Informe o sexo da pessoa: ");
	scanf("%s", &sexo);
	printf("Informe altura: ");
	scanf("%f", &altura);
	printf("Peso ideal = %.2fkg", pesoideal(altura, sexo));
}
