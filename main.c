#include <stdlib.h>
#include <stdio.h>
#include "pile.h"

int main(){
    Pile* link=NULL;
    Pile zelda=NULL;
    Pile kilton=NULL;
    link=empiler(link, 1);
    kilton=empiler(kilton, 1);
    zelda=empiler(zelda,1);
    printf("zelda a pour fleche %d", depiler(zelda));
    return 0;
}