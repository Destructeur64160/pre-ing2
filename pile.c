#include "pile.h"
#include <stdlib.h>
#include <stdio.h>

elementp* creerElementPile(int valeur){
    elementp* fleche;
    fleche->fleche = valeur;
    fleche->suivant = NULL;
    return fleche;
}

Pile empiler(Pile p,int valeur){
    elementp* elt;
    elt = creerElementPile(valeur);
    if (p==NULL){
        p=elt;
    }
    else{
        elt->suivant=p;
        p=elt;
    }
    return p;
}

int depiler(Pile* p){
    int a;
    elementp* elt;
    if (p==NULL){
        exit(EXIT_FAILURE);
    }
    else {
        elt = *p;
        a=elt->fleche;
        *p=elt->suivant;
    }
    return a;
}