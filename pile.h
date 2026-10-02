#ifndef PILE_H
#define PILE_H

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 29/09/26 */
enum fleche {
    ROUGE,
    VERTE,
    BLEUE
};

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 29/09/26 */
struct elementp{
int fleche;
struct elementp* suivant;
};

typedef struct elementp elementp;
typedef struct elementp* Pile;

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 29/09/26 */
/* Entrer: une valeur */
/* Sorties: le nouvel element créer */
/* Résumé: créer une nouvel element */
elementp* creerElementPile(int valeur);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 29/09/26 */
/* Entrer: pile et une flêche */
/* Sortie: la pile */
/* Résumé: ajouter une flêche a une pile */
Pile empiler (Pile p, int valeur);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 02/10/26 */
/* Entrees : une pile*/
/* Sorties : la fleche depilée */
/* Résumé : enlever la flèche de la pile */
int depiler(Pile* p);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 02/10/26 */
/* Entrees : une pile*/
/* Sorties : */
/* Résumé : Afficher une pile */
void afficherP(Pile p);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 02/10/26 */
/* Entrees : une pile et un accumulateur*/
/* Sorties : le nb de flèches*/
/* Résumé : Compte le nombre de flèche dans une pile */
int compterP(Pile p, int acc);

/* Auteur : Kevin Jean-Paul Philippe Jallet*/
/* Date : 02/10/26 */
/* Entrees : une pile p1 et une pile p2*/
/* Sorties : une pile p2 */
/* Résumé : inverse la pile p1 dans p2 */
Pile inverserP(Pile p1, Pile p2);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 02/10/26 */
/* Entrees : une pile p1 et une pile p2 */
/* Sorties : une pile p2 */
/* Résumé : doubler la pile p1 dans la pile p2 */
Pile doublerP(Pile p1,Pile p2);

Pile viderP (Pile p);

#endif