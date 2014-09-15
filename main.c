#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h" // Inclusion du .h qui contient les prototypes et structures

int main(int argc, char *argv[])
{

    int i;
    int nombrejoueur = 2;
    for (i = 0; i < nombrejoueur+1; i++ )
    {
    Personne joueur[2];
    printf("Nom du joueur?\n");
    scanf("%s", joueur[i].nom);
    printf("Prenom du joueur?\n");
    scanf("%s", joueur[i].prenom);
    printf("Quelle est votre classe?\n");
    scanf("%s", joueur[i].classe);
    printf("Quelle est votre age?\n", joueur[i].age);
    scanf("%d", joueur[i].age);
    printf("Etes-vous un garcon ou une fille? 1 pour garcon, 0 pour fille:");
    scanf("%d", joueur[i].sexe);
    if (joueur[i].sexe = 0)
    {
    printf("La joueuse %d est donc %s %s de classe %s, agee de %d. Bienvenue dans le monde de Tsarxarot!", i, joueur[i].nom, joueur[i].prenom, joueur[i].classe, joueur[i].age);
    }
    else if (joueur[i].sexe = 1)
    {
    printf("le joueur %d est donc %s %s de classe %s, agee de %d. Bienvenue dans le monde de Tsarxarot!", i, joueur[i].nom, joueur[i].prenom, joueur[i].classe, joueur[i].age);
    }
    }
return 0;
}
