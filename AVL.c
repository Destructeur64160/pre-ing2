#include "AVL.h"
#include <stdio.h>
#include <stdlib.h>

int ecart (avl a){
    int res;
    if (a==NULL){
        res=0;
    }
    else{
        res= (a->filsG->hauteur)-(a->filsD->hauteur);
    }
    return res;
}

int recupererHauteur(avl a){
    if (a==NULL){
        return 0;
    }
    else{
        int resG = 0;
        int resD = 0;
        if (a->filsG==NULL){
            resD=resD+recupererHauteur(a->filsD);
        }
        else if (a->filsD==NULL){
            resG=resG+recupererHauteur(a->filsG);
        }
        else{
            resD=resD+recupererHauteur(a->filsD);
            resG=resG+recupererHauteur(a->filsG);
        }
        if (resD>resG){
            return resD;
        }
        else{
            return resG;
        }
    }
}

avl creerAVL(int val, avl filsG, avl filsD){
    avl a;
    a=malloc(sizeof(noeud));
    a->val=val;
    a->filsG=filsG;
    a->filsD=filsD;
    a->hauteur=recupererHauteur(a);
    return a;
}

avl rotationGauche(avl a){
    avl b=NULL;
    b=a->filsD;
    a=creerAVL(a->val, a->filsG, b->filsG);
    a->hauteur= 1+recupererHauteur(a);
    b=creerAVL(b->val, a ,b->filsD);
    b->hauteur= 1+recupererHauteur(b);
    return b;
}

avl rotationDroite(avl a){
    avl b=NULL;
    b=a->filsG;
    a=creerAVL(a->val, b->filsD, a->filsD);
    a->hauteur= 1+recupererHauteur(a);
    b=creerAVL(b->val, b->filsG, a);
    b->hauteur= 1+recupererHauteur(b);
    return b;
}