#include <stdio.h>

int main (){
    int validador;
    int comodo;
    
    do{
	printf("\nCalcular porcelanato para a parede -> 1\nCalcular porcelanato para o chão -> 2\nCalcular o porcelanato para ambos -> 3\n ");
    scanf("%d", &validador);  
	if (validador < 1 || validador > 3)
		printf("\nOpção invalida, escolher um número entre 1 e 3");
	
	}while (validador < 1 || validador > 3);
    
	if (validador == 1 || validador == 3){
        printf("\nVocê escolheu revestimento para a parede");
        
        do{
            printf("\nQuantas paredes você ira resvetir com azulejos: ");
            scanf("%d", &comodo);
            if (comodo < 1)
                printf("\nQuantidade de paredes invalida, escolher um número maior que zero");
        } while (comodo < 1);
        
        float alt;
        float larg;
        float comp;
        float area;
        float largazu;
        float compazu;
        float azul;
        float metro;
        
        do{
            printf("\nQual vai ser a largura das paredes?(m) ");
            scanf("%f", &larg);
            if (larg < 1)
                printf("\nLargura invalida, escolher um número maior que zero");
        } while (larg < 1);
        do{
        printf("\nQual vai ser o comprimento das paredes?(m) ");
        scanf("%f", &comp);
        if (comp < 1)
			printf("\nComprimento invalido, escolher um número maior que zero");
		}
		while (comp < 1);
        do{
            printf("\nQual vai ser a altura das paredes?(m) ");
            scanf("%f", &alt);
            if (alt < 1)
                printf("\nAltura invalida, escolher um número maior que zero");
        } while (alt < 1);
        
        do{
            printf("\nQual vai ser a largura do azulejo?(cm) ");
            scanf("%f", &largazu);
            if (largazu < 1)
                printf("\nLargura invalida, escolher um número maior que zero");
        } while (largazu < 1);
        
        do{
            printf("\nQual vai ser o comprimento do azulejo?(cm) ");
            scanf("%f", &compazu);
            if (compazu < 1)
                printf("\nComprimento invalido, escolher um número maior que zero");
        } while (compazu < 1);
        
        area = larg * comp * alt;               
        azul = 1 / (0.0001 * (largazu * compazu));
        metro = area * azul;                
        
        printf("\nA área total dos cômodos são: %.2f m2", area);
        printf("\nA quantidade total de azulejos necessarios por m2 são: %.2f", azul);
        printf("\nA quantidade total de azulejos necessarios para os cômodos são: %.2f", metro * comodo);
    }
    
    if (validador == 2 || validador == 3){ 
        printf("\nVocê escolheu revestimento para o chão");
        
        do{
            printf("\nQuantos cômodos você ira resvetir com azulejos: ");
            scanf("%d", &comodo);
            if (comodo < 1){
                printf("\nQuantidade de cômodos invalida, escolher um número maior que zero");
            }
        } while (comodo < 1);
        
        float larg;
        float comp;
        float area;
        float largazu;
        float compazu;
        float azul;
        float metro;
        
        do{
            printf("\nQual vai ser a largura dos comodos?(m) ");
            scanf("%f", &larg);
            if (larg < 1)
                printf("\nLargura invalida, escolher um número maior que zero");
        } while (larg < 1);
        
        do{
            printf("\nQual vai ser o comprimento dos comodos?(m) ");
            scanf("%f", &comp);
            if (comp < 1)
                printf("\nComprimento invalido, escolher um número maior que zero");
        } while (comp < 1);
        
        do{
            printf("\nQual vai ser a largura do azulejo?(cm) ");
            scanf("%f", &largazu);
            if (largazu < 1)
                printf("\nLargura invalida, escolher um número maior que zero");
        } while (largazu < 1);
        
        do{
            printf("\nQual vai ser o comprimento do azulejo?(cm) ");
            scanf("%f", &compazu);
            if (compazu < 1)
                printf("\nComprimento invalido, escolher um número maior que zero");
        } while (compazu < 1);
        
        area = larg * comp;            
        azul = 1 / (0.0001 * (largazu * compazu));
        metro = area * azul;                
        
        printf("\nA área total dos cômodos são: %.2f m2", area);
        printf("\nA quantidade total de azulejos necessarios por m2 são: %.2f", azul);
        printf("\nA quantidade total de azulejos necessarios para os cômodos são: %.2f", metro * comodo);
    }
    
    return 0;
}