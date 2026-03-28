//TP 4 : Opérations Mathématiques et Utilisateur
//Sommes, moyennes, divisions et calculs de géométrie.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, somme, sous;
    float moyenne;

    printf("Entrez deux nombres pour les calculs :\n");
    scanf("%d %d", &a, &b);

    somme = a + b;
    sous = a - b;
    moyenne = (float)somme / 2;

    printf("La somme des deux nombres est = %d\n", somme);
    printf("La difference est = %d\n", sous);
    printf("La moyenne est = %.2f\n", moyenne);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cote, superficie, a, b, resultat;

    // Calcul Carré
    printf("Entrez la longueur du cote du carre :\n");
    scanf("%f", &cote);
    superficie = cote * cote;
    printf("La superficie du carre est %.2f\n", superficie);

    // Calcul Identité remarquable
    printf("\nEntrez la valeur de a : ");
    scanf("%f", &a);
    printf("Entrez la valeur de b : ");
    scanf("%f", &b);
    resultat = (a + b) * (a + b);
    printf("Le resultat de (%.2f + %.2f)^2 est : %.2f\n", a, b, resultat);

    return 0;
}