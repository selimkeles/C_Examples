#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
char letters[ 26 ] = { 0 };
char text[ 1 ][ 80 ];
int i;
int j;
char *tokenPtr;
int counter = 0;
int counterLetter =0;

printf( "Enter a string:\n" );

for ( i = 0; i <= 0; i++ ) {
gets( &text[ i ][ 0 ] );
}

for ( i = 0; i <= 0; i++ ) {
	for ( j = 0; text[ i ][ j ] != '\0'; j++ ) {
		if ( isalpha( text[ i ][ j ] ) ) {
		++letters[ tolower( text[ i ][ j ] ) - 'a' ];
		}
			}
					}

printf( "\n-------Result of Analysis---------:\n" );

for ( i = 0; i <= 25; i++ ) {
printf( "%c letter occurs %3d times \n ", 'a' + i, letters[ i ] );
counterLetter = counterLetter + letters[i];
}

for ( i = 0; i <= 0; i++ ) {
tokenPtr = strtok( &text[ i ][ 0 ], " \n" );
while ( tokenPtr ) {
++counter;
tokenPtr = strtok( NULL, " \n" ); /* get next token */
	}
		}
printf( "\nThe total number of words is %d\n", counter );
printf( "\nThe total number of letter is %d\n", counterLetter );
return 0;
}
