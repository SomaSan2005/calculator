#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroInserito = 0; 
    char segno = ' ';
    float risultato = 0;
	

    printf("Quanti numeri voi inserire per fare il calcolo?: ");
    scanf("%d",&numeroInserito);

    float *numeri = malloc(sizeof(float) * numeroInserito); 

    for(int i = 0; i < numeroInserito; i++)
    {
        printf("Inserisci il numero %d: ",i);
        scanf("%f",&numeri[i]);
    }
 	int i = 1;
 		if (numeroInserito > 0) 
		risultato = numeri[0];
 			while(i<numeroInserito) {
  			printf("Che operatore voi usare per fare il calcolo tra i numeri scelti?: ");
  			scanf(" %c", &segno);
  		switch(segno)
  		{
  		 	case '+':
    			risultato += numeri[i];
    			i++;
   			 break;
   			case '-':
    			risultato -= numeri[i];
   				 i++;
    		break;

   			default:
   		 printf("Operatore '%c' non valido\n", segno);
  }
 }
    printf("Il risultato è %f\n", risultato);


}
