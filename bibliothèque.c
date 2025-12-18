#include "bibliothèque.h"
#include<math.h>
#include<stdio.h>

// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
     unsigned int result = 1;
    while ( value > 1 ) {
        result *= value;
        value --;
    }
    return result;
}

// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
    if ( pow == 0 ) return 1;
    if ( pow == 1 ) return value;
    int accumulator = 1;
    while( pow > 0 ) {
        accumulator *= value;
        pow--;
    }
    return accumulator;
}

//Définition d'une fonction de permutation de deux nombres entiers
void permutation(int *a,int *b){
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}

//Définition d'une fonction qui resoud une équation de second degrès
void solve_equation(double a, double b, double c){
    double x0, x1, x2, delta;
    if(a == 0){
        printf("Votre equation n\'est pas de second degres\n");
    }
    else{
        delta = power(b,2) - 4*a*c;
        if(delta < 0){
            printf("Votre equation n\'a pas de solution dans R\n");
        }
        else if(delta == 0){
            x0 = (-b)/(2*a);
            printf("Votre equation admet une solution double dans R: x0 = %lf\n",x0);
        }
        else{
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
            printf("Votre equation admet deux solutions dans R: x1 = %lf et x2 = %lf \n",x1, x2);
        }
    }
}

//Définition d'une fonction qui détermine qi un nombre est premier ou pas
void nbre_premier(unsigned int n){
    int m = 1;
    for(int i = 1; i <= (n/2); i++){
        if(n % i == 0){
            m += 1;
        }
    }
    if(m == 2){
        printf("%d est un nombre premier\n",n);
    }
    else{
        printf("%d n\'est pas un nombre premier\n",n);
    }
}
//Définition d'une fonction qui prend deux point et affiche leur distance
double distance(point a, point b){
    double dist;
    dist = sqrt(power((a.abscisse - b.abscisse),2) + power((a.ordonnee - b.ordonnee),2));
    return dist;
}  