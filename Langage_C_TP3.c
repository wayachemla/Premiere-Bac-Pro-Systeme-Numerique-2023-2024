//TP 3 ex1 : Variables et Calculs simples (Mission Martienne)
//Regroupe la gestion de l'énergie, de l'oxygène et des rapports de mission.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("#####################################################\n");
    printf("#                RAPPORT DE MISSION MARTIENNE       #\n");
    printf("#                ETABLI PAR Waya                    #\n");
    printf("#                Explorateur de Terminale           #\n");
    printf("#####################################################\n");
    
    printf("\n Date du journal de bord : \"07.02.2089\" - Temperature exterieure : -65°C \n");
    
    int oxygene = 80;
    int ressource = 45;
    printf("Niveau d'oxygene : %d%%\n", oxygene);
    printf("Niveau de ressource : %d%%\n", ressource);
    
    return 0;
}

//TP 2 ex2 : Calculs de distance et facteurs de terrain
//Regroupe les calculs de déplacement du robot.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vitesse, temps, distance, distance_corrige;
    float facteur_terrain = 0.8; // Utilisation de float pour le facteur décimal

    printf("Entrez la vitesse du robot (km/h) : ");
    scanf("%d", &vitesse);

    printf("Entrez le temps de deplacement (heures) : ");
    scanf("%d", &temps);

    printf("Entrez le facteur de terrain (ex: 0.8) : ");
    scanf("%f", &facteur_terrain);

    distance = vitesse * temps;
    distance_corrige = distance * facteur_terrain;
    
    printf("Le robot a parcouru %d km sur Mars. \n", distance_corrige);
    return 0;
}