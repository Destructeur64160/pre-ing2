#include <stdio.h>
#include <stdlib.h>

/*Auteur: Kevin Jean-Paul Philippe Jallet*/
/*Date: 16 sept 2026*/
/*Résumé: fonction qui calcul le pgcd de deux nombre positif et le renvoi*/
/*Entrées: deux entier positif*/
/*Sortie: un entier positif*/
int PGCD(int a, int b);

int main(){
    int a=-1;
    int b=-1;
    while (a<=0 && b<=0){
        printf("rentrer un nombre positif ");
        scanf("%d",&a);
        printf("rentrer un nombre positif ");
        scanf("%d",&b);
    }
    printf("le PGCD est %d", PGCD(a,b));
    return 0;
}

int PGCD(int a, int b){
    int r=a%b;
    while (r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}