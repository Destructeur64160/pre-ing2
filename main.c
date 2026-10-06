#include <stdlib.h>
#include <stdio.h>
#include "pile.h"

int main(){
    Pile link=NULL;
    Pile zelda=NULL;
    Pile kilton=NULL;
    link=empiler(link, 1);
    link=empiler(link, 2);
    link=empiler(link, 3);
    kilton=empiler(kilton, 1);
    kilton=empiler(kilton, 2);
    kilton=empiler(kilton, 3);
    zelda=empiler(zelda,1);
    zelda=empiler(zelda,2);
    zelda=empiler(zelda,3);
    printf("link a %d fleche \n", compterP(link, 0));
    printf("link a pour fleche %d \n", depiler(&link));
    printf("link a pour fleche %d \n", depiler(&link));
    printf("link a pour fleche %d \n", depiler(&link));
    printf("zelda a pour fleche %d \n", depiler(&zelda));
    printf("zelda a pour fleche %d \n", depiler(&zelda));
    printf("zelda a pour fleche %d \n", depiler(&zelda));
    printf("kilton a pour fleche %d \n", depiler(&kilton));
    printf("kilton a pour fleche %d \n", depiler(&kilton));
    printf("kilton a pour fleche %d \n", depiler(&kilton));
    return 0;
}
