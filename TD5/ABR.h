#ifndef ABR_H_
#define ABR_H_
/* Le prototype/signature de toutes mes fonction/procédures */

typedef struct noeud{
    int val;
    struct noeud* filsG;
    struct noeud* filsD;
}noeud;
typedef noeud* arbre;

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 23/10/2026 */
/* Résumé: créer un arbre binaire */
/* Entrées: la racine que l'on veut incérer ainsi que son fils gauche et droit */
/* Sortie: l'arbre créé */
arbre creerArbreBinaire(int val, arbre filsG, arbre filsD);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 23/10/2026 */
/* Résumé: met l'affichage en forme d'un arbre via le parcours infixe */
/* Entrée: l'arbre que l'on souhaite afficher */
/* Sortie: None */
void parcoursInfixe(arbre abr);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 23/10/2026 */
/* Résumé: affiche un arbre via le parcours infixe */
/* Entrée: l'arbre que l'on souhaite afficher */
/* Sortie: None */
void afficherInfixe(arbre abr);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 23/10/2026 */
/* Résumé: Recherche un élement dans un arbre binaire de recherche */
/* Entrée: la valeur et l'arbre dans lequel on souhaite supprimer la valeur */
/* Sortie: l'arbre dont la racine est la valeur recherchée */
arbre rechercheArbre(int val, arbre abr);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 23/10/2026 */
/* Résumé: Récupére l'élement dans un arbre binaire de recherche */
/* Entrée: l'arbre dans lequel on souhaite rechercher la valeur la plus petite */
/* Sortie: la valeur la plus petite */
int minArbre(arbre abr);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 23/10/2026 */
/* Résumé: Récupère l'élement le plus grand dans un arbre binaire de recherche */
/* Entrée: l'arbre dans lequel on souhaite rechercher la valeur la plus grande */
/* Sortie: la valeur la plus grande */
int maxArbre(arbre abr);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 23/10/2026 */
/* Résumé: supprime l'élement le plus grand dans un arbre binaire de recherche */
/* Entrée: l'arbre dans le quel on souhaite supprimer la valeur la plus grande */
/* Sortie: l'arbre avec la valeur en moins */
arbre supprMax(arbre abr);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 23/10/2026 */
/* Résumé: suppression d'un element dans un arbre binaire de recherche */
/* Entrée: la valeur et l'arbre dans lequel on souhaite supprimer la valeur la plus grande */
/* Sortie: l'arbre avec la valeur en moins */
arbre supprArbre(int val, arbre abr);

#endif