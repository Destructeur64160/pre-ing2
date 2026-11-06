#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"

arbre creerArbreBinaire(int val, arbre filsG, arbre filsD){
    noeud* abr;
    abr=malloc(sizeof(noeud));
    abr->val=val;
    abr->filsG=filsG;
    abr->filsD=filsD;
    return abr;
}

int estFeuille(arbre a){
    if (a->filsG==NULL && a->filsD==NULL){
        return 1;
    }
    return 0;
}

int taille(arbre a){
    if (estFeuille(a)==1){
        return 1;
    }
    else if (a->filsG==NULL) {
        return 1+taille(a->filsD);
    }
    else if (a->filsD==NULL){
        return 1+taille(a->filsG);
    }
    else{
        return 1+taille(a->filsD)+taille(a->filsG);
    }
}

int hauteur(arbre abr){
    if (estFeuille(abr)==1){
        return 0;
    }
    else{
        int valD=0;
        int valG=0;
        if(abr->filsG==NULL){
            valD=hauteur(abr->filsD)+1;
        }
        else if(abr->filsD==NULL){
            valG=hauteur(abr->filsG)+1;
        }
        else{
            valD=hauteur(abr->filsD)+1;
            valG=hauteur(abr->filsG)+1;
        }
        if (valG>valD){
            return valG;
        }
        else{
            return valD;
        }
    }
}

int nbFeuilles(arbre abr){
    if (estFeuille(abr)==1){
        return 1;
    }
     else if (abr->filsG==NULL) {
        return nbFeuilles(abr->filsD);
    }
    else if (abr->filsD==NULL){
        return nbFeuilles(abr->filsG);
    }
    else{
        return nbFeuilles(abr->filsD)+nbFeuilles(abr->filsG);
    }
}