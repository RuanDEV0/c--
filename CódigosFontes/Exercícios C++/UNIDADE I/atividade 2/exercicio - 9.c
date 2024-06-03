#include<stdio.h>
#include<stdlib.h>
void main(){
	
	int n1,n2,n3;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &n1);
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	printf("Digite o terceiro valor: ");
	scanf("%d", &n3);
	
	if((n2+n3>n1) && (n1+n3>n2) && (n1+n2>n3)){
		printf("Positivo\n");
		if((n1==n2) && (n1==n3)){
			printf("-> Triangulo equilatero");
		}else if ((n1==n2) || (n1==n3) || (n2==n3)){
			printf("-> Trangulo isosceles");
		}else{
			printf("-> Triangulo escaleno");
		}
	}
}






	
