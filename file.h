#ifndef FILE_H
#define FILE_H

/* Auteur: Kevin Jean-Paul Philippe Jallet */
/* Date: 29/09/26 */
struct personne{
char* nom;
personne* precedent;
};

typedef struct personne personne;
typedef struct personne* file;
#endif