#include "file.h"
#include <stdio.h>
#include <stdlib.h>

personne* creerElementFile(char* valeur){
    personne* f;
    f=malloc(sizeof(personne));
    f->nom=valeur;
    f->precedent=NULL;
    return f ;
}

/*void afficherP(Pile p){
    if (p==NULL){
        printf("|");
    }
    else{
        printf("|%d",p->fleche);
        afficherP(p->suivant);
    }
}*/