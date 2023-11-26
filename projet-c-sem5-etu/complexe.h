#ifndef COMPLEX_H
#define COMPLEX_H

// Type utilisateur complexe_t
struct complexe {
    float reelle;
    float imaginaire;
};
typedef struct complexe complexe_t;

// Fonctions reelle et imaginaire
/**
 * reelle
 *
 *retourne la partie réelle du nombre complexe 
 *
 *Parametre :
 *    complexe : complexe_t
 *Renvoie : un reelle 
 */
float reelle(complexe_t complexe);

/**
 * Imaginaire
 *
 *retourne la partie imaginaire du nombre complexe 
 *
 *Parametre :
 *    complexe : complexe_t
 *Renvoie : un reelle 
 */
float imaginaire(complexe_t complexe);

// Procédures set_reelle, set_imaginaire et init
/**
 * set_reelle
 *
 *change la partie reelle du nombre complexe
 *
 *Parametre :
 *    complexe : complexe_t*
 *    valeur : float
 */
void set_reelle(complexe_t* complexe, float valeur);


/**
 * set_imaginaire
 *
 *change la partie imaginaire du nombre complexe
 *
 *Parametre :
 *    complexe : complexe_t*
 *    valeur : float
 */
void set_imaginaire(complexe_t* complexe, float valeur);

/**
 * set_imaginaire
 *
 *initialise un complexe avec les 
 *
 *Parametre :
 *    complexe : complexe_t*
 *    valeur_r : float
 *    valeur_i : float
 */
void init(complexe_t* complexe, float valeur_r, float valeur_i);

// Procédure copie
/**
 * copie
 * Copie les composantes du complexe donné en second argument dans celles du premier
 * argument
 *
 * Paramètres :
 *   resultat       [out] Complexe dans lequel copier les composantes
 *   autre          [in]  Complexe à copier
 *
 * Pré-conditions : resultat non null
 * Post-conditions : resultat et autre ont les mêmes composantes
 */
void copie(complexe_t* resultat, complexe_t autre);

// Algèbre des nombres complexes
/**
 * conjugue
 * Calcule le conjugué du nombre complexe op et le sotocke dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   op             [in]  Complexe dont on veut le conjugué
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : reelle(*resultat) = reelle(op), complexe(*resultat) = - complexe(op)
 */
void conjugue(complexe_t* resultat, complexe_t op);

/**
 * ajouter
 * Réalise l'addition des deux nombres complexes gauche et droite et stocke le résultat
 * dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   gauche         [in]  Opérande gauche
 *   droite         [in]  Opérande droite
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = gauche + droite
 */
void ajouter(complexe_t* resultat, complexe_t gauche, complexe_t droite);

/**
 * soustraire
 * Réalise la soustraction des deux nombres complexes gauche et droite et stocke le résultat
 * dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   gauche         [in]  Opérande gauche
 *   droite         [in]  Opérande droite
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = gauche - droite
 */
void soustraire(complexe_t* resultat, complexe_t gauche, complexe_t droite);

/**
 * multiplier
 * Réalise le produit des deux nombres complexes gauche et droite et stocke le résultat
 * dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   gauche         [in]  Opérande gauche
 *   droite         [in]  Opérande droite
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = gauche * droite
 */
void multiplier(complexe_t* resultat, complexe_t gauche, complexe_t droite);

/**
 * echelle
 * Calcule la mise à l'échelle d'un nombre complexe avec le nombre réel donné (multiplication
 * de op par le facteur réel facteur).
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   op             [in]  Complexe à mettre à l'échelle
 *   facteur        [in]  Nombre réel à multiplier
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = op * facteur
 */
void echelle(complexe_t* resultat, complexe_t op, float facteur);

/**
 * puissance
 * Calcule la puissance entière du complexe donné et stocke le résultat dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   op             [in]  Complexe dont on veut la puissance
 *   exposant       [in]  Exposant de la puissance
 *
 * Pré-conditions : resultat non-null, exposant >= 0
 * Post-conditions : *resultat = op * op * ... * op
 *                                 { n fois }
 */
void puissance(complexe_t* resultat, complexe_t op, int exposant);

// Module et argument
/**
 * module_carre
 *
 * retourne le module au carré du nombre complexe.
 *
 * Paramètres :
 *   complexe            [in]  Complexe dont on veut calculer le module au carré 
 *
 * Pré-conditions : aucune
 * Post-conditions : *resultat = | complexe | ^2
 */
float module_carre(complexe_t complexe);

/**
 * module
 *
 * retourne le module du nombre complexe.
 *
 * Paramètres :
 *   complexe            [in]  Complexe dont on veut calculer le module
 *
 * Pré-conditions : aucune
 * Post-conditions : *resultat = | complexe | 
 */
float module(complexe_t complexe);

/**
 * argument
 *
 * retourne l'argument du nombre complexe.
 *
 * Paramètres :
 *   complexe            [in]  Complexe dont on veut calculer l'argument
 * Pré-conditions : complexe /= 0
 * Post-conditions : *resultat = arg(complexe)
 */
float argument(complexe_t complexe);


#endif // COMPLEXE_H



