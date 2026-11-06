#ifndef AVL_H
#define AVL_H

typedef struct noeud{
    int val;
    int hauteur;
    struct noeud* filsG;
    struct noeud* filsD;
}noeud;

typedef noeud* avl;

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 06/11/2026 */
/* Résumé: retourne l'écart de hauteur entre un filsG et un filsD */
/* Entrée: l'arbre AVL */
/* Sortie: un entier */
int ecart(avl a);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 06/11/2026 */
/* Résumé: retourne la hauteur d'un arbre passé en parameètre */
/* Entrée: l'arbre AVL */
/* Sortie: un entier */
int recupererHauteur(avl a);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 06/11/2026 */
/* Résumé: créer un arbre AVL */
/* Entrées: une valeur pour la racine et le sous arbre gauche et droit */
/* Sortie: un avl */
avl creerAVL(int val, avl filsG, avl filsD);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 06/11/2026 */
/* Résumé: retourne un arbre après une rotation à gauche */
/* Entrée: l'arbre AVL */
/* Sortie: un entier */
avl rotationGauche(avl a);




#endif