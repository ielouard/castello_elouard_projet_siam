#include "plateau_siam.h"
#include "pousee.h"
#include "condition_victoire_partie.h"

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int poussee_etre_valide(plateau_siam* plateau ,int x, int y, orientation_deplacement orientation)
{
    assert(plateau!=NULL);
    assert(coordonnees_etre_dans_plateau(x,y));
    assert(orientation_etre_integre_deplacement(orientation));
    //fonction à coder
    return 1;
}

viod poussee_realiser(plateau_siam* plateau ,
                      int x, int y,
                      type_piece type,
                      orientation_deplacement orientation,
                      condition_victoire_partie* )
{
    assert(plateau!=NULL);
    assert(coordonnees_etre_dans_plateau(x,y));
    assert(orientation_etre_integre_deplacement(orientation));
    //fonction à coder
}
