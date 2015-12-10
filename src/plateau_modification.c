#include "plateau_modification.h"
#include "coordonnees_plateau.h"


#include <assert.h>
#include <stdlib.h>
#include <stdio.h>



int plateau_modification_introduire_piece_etre_possible(const plateau_siam* plateau,
                                                        int x,int y,
                                                        type_piece type,
                                                        orientation_deplacement orientation)
{
    return 1; //coder cette fonction
}


void plateau_modification_introduire_piece(plateau_siam* plateau,
                                           int x,int y,
                                           type_piece type,
                                           orientation_deplacement orientation)
{
    //coder cette fonction
}


int plateau_modification_changer_orientation_piece_etre_possible(const plateau_siam* plateau,int x0,int y0,orientation_deplacement orientation)
{
    assert(plateau!=NULL);
    assert(coordonnees_etre_dans_plateau(x0, y0));
    assert(orientation_etre_integre_deplacement(orientation));
    
    const piece_siam* piece=plateau_obtenir_piece_info(plateau, x0, y0);
    assert(piece!=NULL);
    assert(piece_etre_animal(piece));
    
    if(piece->orientation!=orientation)
        return 1;
    
    return 0;
}



void plateau_modification_changer_orientation_piece(plateau_siam* plateau,int x0,int y0,orientation_deplacement orientation)
{
    assert(plateau_modification_changer_orientation_piece_etre_possible(plateau, x0, y0, orientation)==1);
    
    piece_siam* piece=plateau_obtenir_piece(plateau, x0, y0);
    piece->orientation=orientation;
    
    
}


int plateau_modification_deplacer_piece_etre_possible(const plateau_siam* plateau,
                                                      int x0,int y0,
                                                      orientation_deplacement direction_deplacement,
                                                      orientation_deplacement orientation)
{
    assert(plateau!=NULL);
    assert(coordonnees_etre_dans_plateau(x0, y0));
    assert(orientation_etre_integre_deplacement(direction_deplacement));
    assert(orientation_etre_integre_deplacement(orientation));
    if(type_etre_animal(plateau->piece[x0][y0].type))
    {

           coordonnees_appliquer_deplacement(&x0,&y0,direction_deplacement);
            if(piece_etre_case_vide(&plateau->piece[x0][y0]))
                return 1;
    }
     return 0;
}


void plateau_modification_deplacer_piece(plateau_siam* plateau,
                                         int x0,int y0,
                                         orientation_deplacement direction_deplacement,
                                         orientation_deplacement orientation_final)
{
    assert(plateau!=NULL);
    assert(coordonnees_etre_dans_plateau(x0, y0));
    assert(orientation_etre_integre_deplacement(direction_deplacement));
    assert(orientation_etre_integre_deplacement(orientation_final));
    if(coordonnees_etre_dans_plateau(x0, y0))
    {
    piece_siam* piece=plateau_obtenir_piece(plateau,x0,y0);
    type_piece type= piece->type;
    if(plateau_modification_deplacer_piece_etre_possible(plateau,x0,y0,direction_deplacement,orientation_final))
    {
        piece_definir_case_vide(&plateau->piece[x0][y0]);
        coordonnees_appliquer_deplacement(&x0,&y0,direction_deplacement);
        piece=plateau_obtenir_piece(plateau,x0,y0);
        piece_definir(piece,type,orientation_final);
    }
    }
    else
    {
        piece_definir_case_vide(&plateau->piece[x0][y0]);
        plateau->piece[x0][y0].orientation=aucune_orientation;
    }
}


