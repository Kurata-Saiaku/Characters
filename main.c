#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h" // Inclusion du .h qui contient les prototypes et structures


//the goal here is to make it so 2 players have to enter their characters information, and then print a recap of them.
int main(int argc, char *argv[])
{

    int i;
    int nombrejoueur = 2; //number of players.
    for (i = 0; i < nombrejoueur; i++ ) //loop, get first player's info, then second's and so on.
        {
        Personne joueur[2];
    printf("Nom du joueur %d?\n", i+1);//name
    scanf("%s", joueur[i].nom);
    printf("Prenom du joueur?\n");//surname
    scanf("%s", joueur[i].prenom);
    printf("Quelle est votre classe?\n");//ask the class
    scanf("%s", joueur[i].classe);
    printf("Quelle est votre age?\n");//ask the age
    scanf("%d", &joueur[i].age); //value does not get stored for some reasons//fixed, SEND IT TO THE ADRESS YOU DUMBSHIT
    printf("Etes-vous un garcon ou une fille? 1 pour garcon, 0 pour fille:"); //ask whether you're a guy or a girl
    scanf("%d", &joueur[i].sexe);
    switch (joueur[i].sexe)
            {
        case 0:
        printf("La joueuse %d est donc %s %s de classe %s, agee de %d. Bienvenue dans le monde de Tsarxarot!", i, joueur[i].nom, joueur[i].prenom, joueur[i].classe, joueur[i].age);
        break;
        case 1:
        printf("le joueur %d est donc %s %s de classe %s, age de %d. Bienvenue dans le monde de Tsarxarot!", i, joueur[i].nom, joueur[i].prenom, joueur[i].classe, joueur[i].age);
        break;
        default:
        printf("le joueur %d est donc %s %s de classe %s, age de %d. Bienvenue dans le monde de Tsarxarot!", i, joueur[i].nom, joueur[i].prenom, joueur[i].classe, joueur[i].age);
        break;
            }
        }
return 0;
}
