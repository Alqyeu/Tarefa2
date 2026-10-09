#include <stdio.h>

int main (){
	int validador;
	int comodo;
	printf("Quantos cômodos sua casa terá: ");
	scanf( "%d" , &comodo );
	printf("\nVocê vai revestir as paredes com porcelanato?\n Aperte 1 para Sim\n Aperte 2 para não");
	scanf( "%d" , &validador);
			if (validador == 1)	{
				float alt;
				float larg;
				float comp;
				float area;
                float largazu;
				float compazu;
				float azul;
				float total;
				printf("\nQual vai ser a largura dos cômodos? ");
				scanf("%f" , &larg);
				printf("\nQual vai ser o comprimento dos cômodos? ");
				scanf("%f" , &comp);
				printf("\nQual vai ser a altura dos cômodos? ");
				scanf("%f" , &alt);
                printf("\nQual vai ser a largura do azulejo? ");
				scanf("%f" , &largazu);
				printf("\nQual vai ser o comprimento do azulejo? ");
				scanf("%f" , &compazu);
				area = larg * comp * alt;				
                azul = largazu * compazu;
				total = area / azul;				
				printf("\nA área total dos cômodos é: %.2f m²" , area);
				printf("\nA quantidade total de azulejos necessários é: %.2f" , total);
			}
			else if (validador == 2){
                printf("\nVocê escolheu não revestir a parede de seus cômodos");
			}
			
		
    return 0;
}