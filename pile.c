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
        printf("\n");
    }
    else{
        printf("%d\n",p->fleche);
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

Pile inverserP(Pile p1, Pile p2){
    while (p1!=NULL){
        p2=empiler(p2, depiler(&p1));
    }
    return p2;
}

Pile doublerP(Pile p1, Pile p2){
    Pile temp;
    Pile temp2=NULL;
    temp=p1;
    while(temp!=NULL){
        temp2=empiler(temp2, temp->fleche);
        temp = temp->suivant;
    }
    temp= temp2;
    while(temp!=NULL){
        p2=empiler(p2, temp->fleche);
        temp=temp->suivant;
    }
    temp2= viderP(temp2);
    return p2;
}

Pile viderP(Pile p){
    while (p!=NULL){
        depiler(&p);
    }
    return p;
}
