#include<stdio.h>
#include<stdlib.h>
void main(){
    float peso, massa, gravidade = 9.8;
    
    printf("Informe a massa do individuo: ");
    scanf("%f", &massa);
    peso = massa*gravidade;
    printf("O seu peso e: %.2fk", peso);
}
    
    
