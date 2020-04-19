
#ifndef POUSEE_H
#define POUSEE_H
/**
* Fonction poussee_etre_valide:
* *************************
* Verifie si il est possible de realiser une poussee qui debute
*  aux coordonnees (x,y) dans l'orientation definie.
* Note: Les coordonnees (x,y) designent la premiere piece rencontree
*  dans la poussee(et non pas les coordonnees de la piece a l'origine
*  de la poussee).
*
* Necessite:
*   - Un pointeur non NULL vers un plateau integre non modifiable.
*   - Deux coordonnees entieres (x,y) designant une piece non
* vide integre du plateau.
*   - Une orientation de poussee designant une direction integre.
* Garantie:
*   - Un retour valant 1 si la poussee est possible.
*   - Un retour valant 0 sinon.
*
*/

/**
* Fonction poussee_realiser:
* *************************
* Realise une poussee sur un plateau en supposant que celle-ci
*  est realisable (et non pas les coordonnees de la piece a l'origine
*  de la poussee).
*
* Necessite:
*   - Un pointeur non NULL vers un plateau integre modifiable.
*   - Deux coordonnees entieres (x,y) designant une piece non
*       vide integre du plateau.
*   - Un type d'animal a deplacer.
*   - Une orientation de poussee designant une direction integre.
*   - Un pointeur non NULL vers une condition de victoire modifiable.
* Garantie:
*   - Un plateau integre mis a jour en ayant realise la poussee.
*
*/
#endif
