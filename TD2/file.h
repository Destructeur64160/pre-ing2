#ifndef FILE_H
#define FILE_H

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 29/09/26 */
struct personne{
char* nom;
struct personne* precedent;
};

typedef struct personne personne;
typedef struct personne* file;

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 09/10/26 */
/* Entree: une chaine de caracteres */
/* Sortie: une personne */
/* Résumé: creer une personne aveec un nom */
personne* creerElementFile(char* valeur);

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 09/10/26 */
/* Entrees: une file et une chaine de caracter */
/* Sortie: la file modifiée */
/* Résumé: enfiler un élement personne dans la file */
void afficherF(file f);

#endif