#include <stdio.h>

// macro that prints its argument
#define PRINT( string ) printf( "%s", ( string ) )

int main( void )
{ 
   char text[ 20 ]; // array to hold user input string
   
   // prompt user and read string
   PRINT( "Enter a string: " );
   scanf( "%19s", text );

   // use macro to output string entered by user
   PRINT( "The string entered was: " );
   PRINT( text );
   PRINT( "\n" );
} // end main

