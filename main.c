#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.h"
int main( void ) {
    int result = power( 2, 3 ),first = 10, second = 20;
    printf( "2³ == %d\n", result );
    result = fact( 6 );
    printf( "6! == %d\n", result );
    printf("first=%d # second=%d\n",first,second);
    permutation(&first,&second);
    printf("first=%d # second=%d\n",first,second);
    return EXIT_SUCCESS;
}