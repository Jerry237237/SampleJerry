#include <stdio.h>
#include <stdlib.h>
#include "bibliothèque.h"

int main( void ) {
    int choix, nb, nbr, expo, result, first, second;
    unsigned int n;
    point pt1, pt2;
    double dist, a, b, c;
    printf("Bonjour et bienvenu dans notre programme contenant plein de fonction\n");
    printf("1-Pour la fonction qui calcule le factoriel\n2-Pour la fonction d\'elevation a une puissance donnee\n3-Pour la permutation de deux entier\n4-Pour la resolution d\'une equation de second degres\n5-Pour determiner si un nombre est premier ou pas\n6-Pour determiner la distance entre deux point du plan\n0-Pour quitter\n");
    do{
        printf("Faites votre choix: ");
        scanf("%d",&choix);
        switch (choix) {
            case 1:
                printf("Entrer un entier: ");
                scanf("%d",&nb);
                printf( "%d! == %d\n",nb, fact(nb));
                break;
            case 2:
                printf("Entrer un l\'entier et la puissance: ");
                scanf("%d %d",&nbr,&expo);
                result = power(nbr, expo);
                printf( "%d^%d = %d\n",nbr, expo, result);
                break;
            case 3:
                printf ("entrer les deux nombres entiers a permuter: ");
                scanf("%d %d", &first, &second);
                printf("Avant permutation first=%d # second=%d\n",first,second);
                permutation(&first,&second);
                printf("Apres permutation first=%d # second=%d\n",first,second);    
                break;
            case 4:
                printf("Votre equation est sous la forme ax^2+bx+c=0\n");
                printf("Entrer successivement les valeurs de a, b, c: ");
                scanf("%lf %lf %lf", &a, &b, &c);
                solve_equation(a,b,c);
                break;
            case 5:
                printf("Entrer un enier: ");
                scanf("%d",&n);
                nbre_premier(n);
                break;
            case 6:
                printf("Entrer l\'abcisse et l\'ordonnee du premier point: ");
                scanf("%lf %lf",&pt1.abscisse, &pt1.ordonnee);
                printf("Entrer l\'abcisse et l\'ordonnee du premier point: ");
                scanf("%lf %lf",&pt2.abscisse, &pt1.ordonnee);
                dist = distance(pt1,pt2);
                printf("La distance entre vos deux point est de: %lf\n",dist);    
                break;
            default:
                break;
        }
    }while(choix != 0);

    return EXIT_SUCCESS;
}