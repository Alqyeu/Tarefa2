#include <stdio.h>

int main (){
	int validador;
	int comodo;
	printf("Quantos cÃ´modos sua casa terÃ¡: ");
	scanf( "%d" , &comodo );
	printf("\nCalcular porcelanato para a parede -> 1\nCalcular porcelanato para o chão ->2\nCalcular o porcelanato para ambos ->3");
	scanf( "%d" , &validador);
			if (validador == 1 or validador == 3)	{
				float alt;
				float larg;
				float comp;
				float area;
                float largazu;
				float compazu;
				float azul;
				float total;
				printf("\nQual vai ser a largura dos comodos? ");
				scanf("%f" , &larg);
				printf("\nQual vai ser o comprimento dos comodos? ");
				scanf("%f" , &comp);
				printf("\nQual vai ser a altura dos comodos? ");
				scanf("%f" , &alt);
                printf("\nQual vai ser a largura do azulejo?(cm) ");
				scanf("%f" , &largazu);
				printf("\nQual vai ser o comprimento do azulejo?(cm) ");
				scanf("%f" , &compazu);
				area = larg * comp * alt;				
                azul = 1/(0.0001*(largazu + compazu));
				total = area * azul;				
				printf("\nA área total dos cômodos são: %.2f m²" , area);
				printf("\nA quantidade total de azulejos necessarios são: %.2f" , total);
			}
			else if (validador == 2 or validador == 3){
                printf("\nVocÃª escolheu nÃ£o revestir a parede de seus cÃ´modos");
			}
			
		
    return 0;
}
