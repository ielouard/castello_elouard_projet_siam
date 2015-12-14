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
    piece_siam* piece=plateau->piece[x][y];
    orientation_deplacement orientation_piece=piece.orientation;
   if(orientation==orientation_piece)
   {
    if(piece.type==case_vide) return 1;
    if(piece.orientation==orientation_inverse(orientation_piece))
   }
   int cpt_inv,cpt,i;
   if(orientation==haut || orientation==bas)
   for(i=0;i<=4;i++)
   {
       if(plateau.piece[x][i].orientation==orientation_inverse(orientation_piece)) cpt_inv++;
       if(plateau.piece[x][i].orientation==orientation_piece) cpt++;
   }
   if(orientation==gauche || orientation==droite)
   for(i=0;i<=4;i++)
   {
       if(plateau.piece[i][y].orientation==orientation_inverse(orientation_piece)) cpt_inv++;
       if(plateau.piece[i][y].orientation==orientation_piece) cpt++;
   }
   if(cpt_inv<cpt) return 1;
   return 0;
}

void poussee_realiser(plateau_siam* plateau ,
                      int x, int y,
                      type_piece type,
                      orientation_deplacement orientation,
                      condition_victoire_partie* )
{
    assert(plateau!=NULL);
    assert(coordonnees_etre_dans_plateau(x,y));
    assert(orientation_etre_integre_deplacement(orientation));
    if(poussee_etre_valide(plateau ,x,y,orientation))
    {
        if(orientation=haut || orientation =bas)
        {
            for(i=0;i<=4;i++)
            {
                if(plateau.piece[x][i]!=case_vide)
                {
                   // coordonnee_appliquer_deplacement(x,y,orientation)
                }
            }
            
        }
    }
}
