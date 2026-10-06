#include "pile.h"
#include <stdlib.h>
#include <stdio.h>

elementp* creerElementPile(int valeur){
    elementp* fleche;
    fleche=malloc(sizeof(elementp));
    if (fleche == NULL){
        fprintf(stderr, "ERREUR d'allocation mémoire \n");
        exit(EXIT_FAILURE);
    }
    fleche->fleche = valeur;
    fleche->suivant = NULL;
    return fleche;
}

Pile empiler(Pile p,int valeur){
    elementp* elt;
    elt = creerElementPile(valeur);
    elt->suivant=p;
    p=elt;
    return p;
}

int depiler(Pile* p){
    int a;
    elementp* elt;
    if (*p==NULL){
        fprintf(stderr, "ERREUR on ne peut pas dépiler une pile vide \n");
        exit(EXIT_FAILURE);
    }
    else {
        elt = *p;
        a=elt->fleche;
        *p=elt->suivant;
        free(elt);
    }
    return a;
}

void afficherP(Pile p){
    if (p==NULL){
        printf("|");
    }
    else{
        printf("|%d",p->fleche);
        afficherP(p->suivant);
    }
}

int compterP(Pile p,int acc){
    if (p==NULL){
        return acc;
    }
    else{
        return compterP(p->suivant,acc+1);
    }
}
