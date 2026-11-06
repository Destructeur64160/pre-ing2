#ifndef arbre_H_
#define arbre_H_

typedef struct noeud{
    int val;
    struct noeud* filsG;
    struct noeud* filsD;
}noeud;

typedef noeud* arbre;

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 16/10/2026 */
/* Résumé: créer un arbre binaire */
/* Entrées : la racine que l'on veut incérer ainsi que son fils gauche et droit */
/* Sortie: l'arbre créé */
arbre creerArbreBinaire(int val, arbre filsG, arbre filsD);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 16/10/2026 */
/* Résum: donne la taille d'un arbre */
/* Entrée: arbre */
/* Sorties: compteur */
int taille(arbre abr);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 16/10/2026 */
/* Résumé: vérifie si un noeud est une feuille */
/* Entrée: arbre */
/* sortie: Vrai (1) ou Faux (0) */
int estFeuille(arbre abr);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 16/10/2026 */
/* Résumé: donne la hauteur d'un arbre */
/* Entrée: arbre */
/* sortie: enier */
int hauteur(arbre abr);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 16/10/2026 */
/* Résumé: donne le nombre de feuille d'un arbre */
/* Entrée: arbre */
/* sortie: enier */
int nbFeuilles(arbre abr);
#endif