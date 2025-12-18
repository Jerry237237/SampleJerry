#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );
//Définition d'une fonction de permutation de deux nombres entiers
void permutation(int *a,int *b);
//Définition d'une fonction qui resous une équation de second degrès
void solve_equation(double a, double b, double c);
//Définition d'une fonction qui détermine qi un nombre est premier ou pas
void nbre_premier(unsigned int n);
//Définition d'une structure point qui prends les coordonnée d'un point du plan et une fonction qui prend deux point et affiche leur distance  
typedef struct{
    double abscisse;
    double ordonnee;
} point;
double distance(point a, point b);
#endif