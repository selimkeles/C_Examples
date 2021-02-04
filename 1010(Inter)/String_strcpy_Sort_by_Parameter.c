#include <stdio.h>
#include <string.h>
void Sort( char a[][ 50 ] , int parameter); /* function prototype */
int main()
{
char array[ 5][ 50 ]; /* 5 X 50 input string matrix */
int i; /* counter */
int parameter;
/* obtain the parameter */
printf("sorting parameter");
scanf("%d", &parameter);
parameter = parameter -1 ;
/* get the names */
for ( i = 0; i <= 4; i++ ) {
printf( "Enter a string: " );
scanf( "%s", &array[ i ][ 0 ] );
} /* end for */
Sort( array, parameter ); /* sort the array of names */
printf( "\nThe strings in sorted order are:\n" );
/* display text in sorted order */
for ( i = 0; i <= 4; i++ ) {
printf( "%s\n", &array[ i ][ 0 ] );
} /* end for */
return 0; /* indicate successful termination */
} /* end main */
/* sort the array */
void Sort( char arraySort[][ 50 ] , int parameter)
{
int i; /* loop counter */
int j; /* loop counter */
char temp[ 50 ]; /* temporary array */
/* sorting loop */
for ( i = 0; i <= 3; i++ ) {
for ( j = 0; j <= 3; j++ ) {
/* swap strings if necessary */
if ( strcmp( &arraySort[ j ][ parameter ], &arraySort[ j + 1 ][ parameter ] ) > 0 ) {
strcpy( temp, &arraySort[ j ][ 0] );
strcpy( &arraySort[ j ][ 0 ], &arraySort[ j + 1 ][0 ] );
strcpy( &arraySort[ j + 1 ][ 0 ], temp );
} /* end if */
} /* end for */
} /* end for */
} /* end function Sorting */
