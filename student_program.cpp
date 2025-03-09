#include <stdio.h>

char* reverse( char str1[] ) ;
int my_strlen( char str[] ) ;

int main() {

    char text[ 50 ] ;
    char *output ;

    printf( "Enter str1 : " ) ;
    gets( text ) ;

    output = reverse( text ) ;

    printf( "MAIN : %s\n" , output ) ;

    return 0 ;
}

char* reverse( char str1[] ) {

    int x , i ;
    char y ;

    x = my_strlen( str1 ) ;

    for ( i = 0 ; i < x / 2 ; i++ ) {
        y = str1[ i ] ;
        str1[ i ] = str1[ x - i - 1 ] ;
        str1[ x - i - 1 ] = y ;
    }

    printf( "FUNC : %s\n" , str1 ) ;

    return str1 ;
}

int my_strlen( char str[] ) {

    int count = 0 ;

    while ( str[ count ] != '\0' ) {
        count++ ;
    }

    return count ;
}
