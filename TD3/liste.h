#ifndef LISTE_H
#define LISTE_H
/* Le prototypes/signature de toutes mes fonctions/procédures */

struct maillon {
    int donne;
    struct maillon* suivant;
};

typedef struct maillon maillon;
typedef struct maillon* liste;

/* Auteur: Kevin Jean-Paul Philippe Jallet*/
/* Date: 09/10/26 */
/* Entree: une donnée */
/* Sortie: un maillon */
/* Résumé: ajouter un maillon en tête avec la donnée associé */
maillon* creer_maillon(int donne);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 09/10/26 */
/* Entrees: une liste et une donnée */
/* Sortie: une liste */
/* Résumé: ajouter un maillon en tête de liste */
liste ajouter_tete(liste maListe, int donne);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 09/10/26 */
/* Entree: une liste */
/* Sortie: */
/* Résumé: afficher une liste chainée */
void afficher(liste maListe);

#endif