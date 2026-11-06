#include <stdio.h>
#include <stdlib.h>
#include "ABR.h"
/* corps des différentes fonctions/procédures */

arbre creerArbreBinaire(int val,arbre filsG, arbre filsD){
    noeud* abr;
    abr=malloc(sizeof(noeud));
    abr->val=val;
    abr->filsG=filsG;
    abr->filsD=filsD;
    return abr;
}

void parcoursInfixe(arbre abr){
    printf("|");
    afficherInfixe(abr);
    printf("\n");
}

void afficherInfixe(arbre abr){
    if (abr!=NULL){
        afficherInfixe(abr->filsG);
        printf("%d|", abr->val);
        afficherInfixe(abr->filsD);
    }
}

arbre rechercheArbre(int val, arbre abr){
    if (abr==NULL){
        return abr;
    }
    else if(abr->val==val){
        return abr;
    }
    else if(abr->val<val){
        return rechercheArbre(val, abr->filsD);
    }
    else if(abr->val>val){
        return rechercheArbre(val, abr->filsG);
    }
    return abr;
}

int minArbre(arbre abr){
    while(abr->filsG!=NULL){
        abr=abr->filsG;
    }
    return abr->val;
}

int maxArbre(arbre abr){
    while(abr->filsD!=NULL){
        abr=abr->filsD;
    }
    return abr->val;
}

arbre supprMax(arbre abr){
    int max;
    max=maxArbre(abr);
    return supprArbre(max, abr);
}

arbre supprArbre(int val, arbre abr){
    if(abr==NULL){
        retourner abr;
    }
    
}
