#include <stdio.h>

#include <stdlib.h>

int main()

{

   int numeroInserito; 

    char segno;

    float risultato = 0;

    printf("Quanti numeri voi inserire per fare il calcolo?: ");

    scanf("%d",&numeroInserito);

    float *numeri = malloc(sizeof(float) * numeroInserito); 

    for(int i = 0; i < numeroInserito; i++)

    {

        printf("Inserisci il numero %d: ",i);

        scanf("%f",&numeri[i]);

    }

    error:

    printf("Che operatore voi usare per fare il calcolo tra i numeri scelti?: ");

    scanf(" %c", &segno);

    switch(segno)

    {

        case '+':

            for(int i = 0; i < numeroInserito; i++)

                risultato += numeri[i];

            break;

        case '-':

            for(int i = 0; i < numeroInserito; i++)

                risultato -= numeri[i];

            break;

        case '*':

            for(int i = 0; i < numeroInserito; i++)

                risultato *= numeri[i];

            break;

        case '/':

            for(int i = 0; i < numeroInserito; i++)

                risultato /= numeri[i];

            break;

        default:

            printf("Operatore '%c' non valido\n", segno);

            goto error;

            break;

    }

    printf("Il risultato è %f\n", risultato);

    return 0;

}
