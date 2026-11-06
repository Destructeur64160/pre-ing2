#include <stdio.h>
#include <stdlib.h>

int puissanceRecNT(int a,int b);
int puissanceRecT(int a, int b, int acc);

int main() {
    int a;
    int b;
    printf("Bonjour, je suis le programme principal \n");
    printf("Veuillez entrer un chiffre \n");
    scanf("%d",&a);
    b=-1;
    while (b<0){ 
        b=0;
        printf("Veuillez entrer un chiffre positif\n");
        scanf("%d", &b);
    }
    printf("a à la puissance b vaut %d", puissanceRecNT(a,b-1));
    printf("a à la puissance b en terminale vaut %d", puissanceRecT(a,b,1));
    return 0;
}

/*Auteur: Kevin Jean-Paul Philippe Jallet*/
/*Date: 16 sept 2026*/
/*Résumé: fonction qui calcul la puissance d'un nombre par un autre de manière recursive non terminal et renvoie le resultat*/
/*Entrées: deux entier dont un positif*/
/*Sortie: une sortie qui vaut a puissance b*/
int puissanceRecNT(int a, int b){
    if (b==0){
        return 1;
    }
    else{
        return a*puissanceRecNT(a, b-1);
    }
}

/*Auteur: Kevin Jean-Paul Philippe Jallet*/
/*Date: 16 sept 2026*/
/*Résumé: fonction qui calcul la puissance d'un nombre par un autre de manière recursive terminal et renvoie le resultat*/
/*Entrées: deux entier dont un positif*/
/*Sortie: une sortie qui vaut a puissance b*/
int puissanceRecT(int a, int b,int acc){
    if (b==0){
        return acc;
    }
    else{
        return puissanceRecT(a,b-1,acc*a);
    }
}