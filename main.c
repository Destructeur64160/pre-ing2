#include <stdio.h>
#include "liste.h"

int main(){
    printf("C'est la liste!\n");
    liste elt=NULL;
    elt=ajouter_tete(elt,1);
    elt=ajouter_tete(elt,2);
    elt=ajouter_tete(elt,3);
    afficher(elt);
    return 0;
}