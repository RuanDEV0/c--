#include <stdio.h>
#include <stdlib.h>
int main(){
   int numero[10];
   int i;
   int ref;
   int conta = 0;
   float media;
   int impar = 0;
   int resultado = 0;
   int e; 
   int busca;
   

    //Preencimento do Vetor[10]
    
    for(i = 0; i < 10; i++){
      printf(" --> Digite um numero: ");
      scanf("%d", &numero[i]);
   }


    //Valor de referencia
    
    printf("\n\n");
    printf(" --> Digite um valor de referencia: ");
    scanf("%d", &ref);
    
    
    //Questão A
    
    printf("\n\n");
    for(i = 0; i<10; i++){
    	if(numero[i] == ref){
    		busca = busca + 1;
		}
	}if(busca >= 1){
		printf(" --> Valor encontrado: %d vez", busca);
	}else{
		printf(" --> Valor nao encontrado");
	}
    
    
    //Questão B
    
    printf("\n\n");
    printf(" --> Numeros maiores que a referencia: ");
    for(i = 0; i < 10; i++){
         if(numero[i] > ref){
         	printf("%d,", numero[i]);
       }
   }


    //Questão C
    
    printf("\n\n");
    printf(" --> Numeros menores que a referencia: ");
    for(i = 0; i < 10; i++){
        if(numero[i] < ref){
         printf("%d,", numero[i]);
        }
   }
   
   
   //Questão D
   
    printf("\n\n");
    for(i = 0; i < 10; i++){
     conta = conta + numero[i];
   }
    media = conta / 10;
    printf(" --> Media dos valores: %.2f", media);
    
    
    //Questão E
    
    printf("\n\n");
    printf(" --> Ordem inversa: ");
    for(i = 9; i >= 0; i--){
      printf("%d,", numero[i]);
   }


    //Questão F
    
    printf("\n\n");
    printf(" --> Numeros primos: ");
    for(i = 0; i <10; i++){
    	if(numero[i]<=1){
    		printf("");
		}else{
			for(e = 2; e < numero[i]; e++){
				if(numero[i] % e == 0){
					printf("");
					break;
				}
			}
			if(e == numero[i]){
				printf("%d,", numero[i]);
			}
		}
	}
	
	
    //Questão G
     
    printf("\n\n");
    printf(" --> Soma dos numeros impares: ");
    for(i = 0; i < 10; i++){
       if(numero[i] % 2 == 1){
            impar = impar + numero[i];
        }
   }
    printf("%d", impar);
    printf("\n\n");
    
    
    
    system("pause");
    return 0;
}
