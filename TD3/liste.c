#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

maillon* creer_maillon(int donne){
    maillon* elt;
    elt=malloc(sizeof(maillon));
    if (elt==NULL){
        fprintf(stderr, "ERREUR d'allocation \n");
        exit(EXIT_FAILURE);
    }
    elt->donne=donne;
    elt->suivant=NULL;
    return elt;
}

liste ajouter_tete(liste maListe, int donne){
    maillon* elt;
    elt = creer_maillon(donne);
    elt->suivant=maListe;
    return elt;
}

void afficher(liste maListe){
    while(maListe!=NULL){
        printf("| %d ", maListe->donne);
        maListe=maListe->suivant;
    }
    printf("|");
}