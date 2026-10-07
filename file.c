#include "file.h"
void afficherP(Pile p){
    if (p==NULL){
        printf("|");
    }
    else{
        printf("|%d",p->fleche);
        afficherP(p->suivant);
    }
}
