#include "complexe.h"
#include <math.h>           // Pour certaines fonctions trigo notamment

// Implantations de reelle et imaginaire
float reelle(complexe_t complexe){
return complexe.reelle;
}
/** FONCTION imaginaire À IMPLANTER **/
float imaginaire(complexe_t complexe){
return complexe.imaginaire;
}
// Implantations de set_reelle et set_imaginaire
/** PROCÉDURE set_reelle À IMPLANTER **/
void set_reelle( complexe_t* complexe, float valeur ) {
*complexe.reelle = valeur;
}

/** PROCÉDURE set_imaginaire À IMPLANTER **/
void set_imaginaire( complexe_t* complexe, float valeur ) {
*complexe.imaginaire = valeur;
}
void init(complexe_t* complexe, float valeur_r, float valeur_i){
    set_reelle(complexe,valeur_r);
    set_imaginaire(complexe,valeur_i);
}

// Implantation de copie
void copie(complexe_t* resultat, complexe_t autre){
    set_reelle(resultat,autre.reelle);
    set_imaginaire(resultat,autre.imaginaire);
}

// Implantations des fonctions algébriques sur les complexes
/** PROCÉDURE conjugue À IMPLANTER **/
void conjugue(complexe_t* resultat, complexe_t op){
    set_reelle(resultat,op.reelle);
    set_imaginaire(resultat,-op.imaginaire);
}

/** PROCÉDURE ajouter À IMPLANTER **/
void ajouter(complexe_t* resultat, complexe_t gauche, complexe_t droite){
      set_reelle(resultat,gauche.reelle+droite.reelle);
    set_imaginaire(resultat,gauche.imaginaire+droite.imaginaire);
}



/** PROCÉDURE soustraire À IMPLANTER **/
/** PROCÉDURE multiplier À IMPLANTER **/
/** PROCÉDURE echelle À IMPLANTER **/

/** PROCÉDURE puissance À IMPLANTER **/

// Implantations du module et de l'argument
/** FONCTION module_carre À IMPLANTER **/
/** FONCTION module À IMPLANTER **/
/** FONCTION argument À IMPLANTER **/


