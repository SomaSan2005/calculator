#include <stdio.h>
#include <stdlib.h>

int Tabellina(int risulato,int numeroInserito,char segno);

int main()
{

   
	int valore;
	int numeroInserito = 0;
	char segno = ' ';
	float risultato = 0;
	char risposta = 'S';

	while(risposta=='S')
	{
		printf("Quanti numeri voi inserire per fare il calcolo?: ");
		scanf("%d", &numeroInserito);
		if(numeroInserito==1)
		{
			printf("non poi inserire un numero solo ma due minimo");
			printf("\nvoi continuare si o no ? S|N: ");
			scanf("%s",&risposta);
		}	
       else 
	  	 break;
	}

	if(risposta=='S')
	{
	
	float *numeri = malloc(sizeof(float) * numeroInserito);

	for (int i = 0; i < numeroInserito; i++)
	{
		printf("Inserisci il numero %d: ", i);
		scanf("%f", &numeri[i]);
		
	}
	int i = 1;
	if (numeroInserito > 0)
		risultato = numeri[0];
	while (i < numeroInserito)
	{
		printf("Che operatore voi usare per fare il calcolo tra i numeri scelti?: ");
		scanf(" %c", &segno);
		switch (segno)
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
	printf("Il risultato del'operazione: %f\n", risultato);


	Tabellina(risultato,numeroInserito,segno);
	}

 	system("pause");

}

int Tabellina(int risulato,int numeroInserito,char segno)
{
	char segni = ' ';
	int numeroinserito = 0;
	int risultato = 0;
	printf("Valore del risultato: |  %d  |",risulato);
    printf(" Segno inserito: |  %c  |",segno);
}

