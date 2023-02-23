#include <stdio.h>

/* programma che legge le dimensioni di una matrice legge due interi r e c
 * introdotti dall'utente e crea una matrice r * c che contiene tutti i numeri
 * naturali da 1 fino a r * c, in ordine crescente da 1 a c sulla prima riga,
 * poi da c+1 a 2c sulla seconda riga, etc... */
 int main() {
       int numRighe, numColonne;          // dimensione array
       int numeroDaAssegnare;             // per assegnare i valori alla matrice

       /* leggi dimensione e crea array */
       printf("quante righe ha la tua matrice?\n");
       scanf("%d", &numRighe);
       printf("quante colonne ha la tua matrice?\n");
       scanf("%d", &numColonne);
       int matrice[numRighe][numColonne];

       /* assegna i valori alla matrice, uno alla volta */
       numeroDaAssegnare = 1;
       for(int i=0; i<numRighe; i++)
            for(int j=0; j<numColonne; j++) {
                  matrice[i][j] = numeroDaAssegnare;
                  numeroDaAssegnare++;
            }

      /* visualizza la matrice, allineando a destra gli elementi */
      printf("\nEcco la tua matrice:\n\n");
      for(int i=0; i<numRighe; i++) {
            for(int j=0; j<numColonne; j++)
                  printf("%5d", matrice[i][j]);
            printf("\n");
            system("PAUSE");
      }
}
