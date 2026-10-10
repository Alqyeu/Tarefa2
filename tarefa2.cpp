#include <stdio.h>

int main (){
	int validador;
	int comodo;
	printf("\nCalcular porcelanato para a parede -> 1\nCalcular porcelanato para o chão -> 2\nCalcular o porcelanato para ambos -> 3\n ");
	scanf( "%d" , &validador);	
			if (validador == 1 || validador == 3){
				printf("\nVocê escolheu revestimento para a parede");
				printf("\nQuantas paredes você ira resvetir com azulejos: ");
				scanf( "%d" , &comodo );
				float alt;
				float larg;
				float comp;
				float area;
                float largazu;
				float compazu;
				float azul;
				float metro;
				printf("\nQual vai ser a largura das paredes?(m) ");
				scanf("%f" , &larg);
				printf("\nQual vai ser o comprimento das paredes?(m) ");
				scanf("%f" , &comp);
				printf("\nQual vai ser a altura das paredes?(m) ");
				scanf("%f" , &alt);
                printf("\nQual vai ser a largura do azulejo?(cm) ");
				scanf("%f" , &largazu);
				printf("\nQual vai ser o comprimento do azulejo?(cm) ");
				scanf("%f" , &compazu);
				area = larg * comp * alt;				
                azul = 1/(0.0001*(largazu * compazu));
				metro = area * azul;				
				printf("\nA área total dos cômodos são: %.2f m2" , area);
				printf("\nA quantidade total de azulejos necessarios por m2 são: %.2f" , azul);
				printf("\nA quantidade total de azulejos necessarios para os cômodos são: %.2f" , metro * comodo);
			}
			if (validador == 2 || validador == 3){
                printf("\nVocê escolheu revestimento para o chão");
				printf("\nQuantos cômodos você ira resvetir com azulejos: ");
				scanf( "%d" , &comodo );
				float larg;
				float comp;
				float area;
                float largazu;
				float compazu;
				float azul;
				float metro;
				printf("\nQual vai ser a largura dos comodos?(m) ");
				scanf("%f" , &larg);
				printf("\nQual vai ser o comprimento dos comodos?(m) ");
				scanf("%f" , &comp);
                printf("\nQual vai ser a largura do azulejo?(cm) ");
				scanf("%f" , &largazu);
				printf("\nQual vai ser o comprimento do azulejo?(cm) ");
				scanf("%f" , &compazu);
				area = larg * comp;				
                azul = 1/(0.0001*(largazu * compazu));
				metro = area * azul;				
				printf("\nA área total dos cômodos são: %.2f m2" , area);
				printf("\nA quantidade total de azulejos necessarios por m2 são: %.2f" , azul);
				printf("\nA quantidade total de azulejos necessarios para os cômodos são: %.2f" , metro * comodo);
			}
			else{
				printf("\nOpção invalida");
			}
			
		
    return 0;
}