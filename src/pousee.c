#include "plateau_siam.h"
#include "pousee.h"
#include "condition_victoire_partie.h"
#include "orientation_deplacement.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int poussee_etre_valide(plateau_siam* plateau ,int x, int y, orientation_deplacement orientation)
{
    assert(plateau!=NULL);
    assert(coordonnees_etre_dans_plateau(x,y));
    assert(orientation_etre_integre_deplacement(orientation));
    coordonnees_appliquer_deplacement(x,y,orientation);
    piece_siam* piece=plateau->piece[x][y];
    orientation_deplacement orientation_piece=piece.orientation;
   if(orientation==orientation_piece)
   {
    if(piece.type==case_vide) return 1;
    if(piece.orientation==orientation_inverse(orientation_piece))
    //fonction à coder
   
   }
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
