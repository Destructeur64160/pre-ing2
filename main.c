#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"

int main(){
    arbre abr=NULL;
    abr= creerArbreBinaire(42,creerArbreBinaire(24,NULL,NULL),NULL);
    printf("la taille de l'arbre est %d\n", taille(abr));
    printf("la hauteur de l'arbre est %d\n", hauteur(abr));
    printf("le nombre de feuille est %d\n", nbFeuilles(abr));
    return 0;
}