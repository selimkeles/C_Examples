#include <stdio.h>

// macro to determine smallest of two values
#define MINIMUM2( x, y ) ( ( x ) < ( y ) ? ( x ) : ( y ) )

// macro that uses MINIMUM2 to determine smallest of three values
#define MINIMUM3( u, v, w ) ( MINIMUM2( w, MINIMUM2( u, v ) ) ) 

int main( void )
{ 
   int a; // first integer
   int b; // second integer
   int c; // third integer
   double d; // first double
   double e; // second double
   double f; // third double
   
   // prompt user and read three integers
   printf( "%s", "Enter three integers: " );
   scanf( "%d%d%d", &a, &b, &c );

   // use macro MINIMUM3 to determine smallest 
   // of three user input integers
   printf( "The minimum of %d, %d, and %d is %d\n\n", 
      a, b, c, MINIMUM3( a, b, c ) ); 

   // prompt user and read three doubles
   printf( "%s", "Enter three doubles: " );
   scanf( "%lf%lf%lf", &d, &e, &f );

   // use macro MINIMUM3 to determine smallest 
   // of three user input doubles
   printf( "The minimum of %.2f, %.2f, and %.2f is %.2f\n\n", 
      d, e, f, MINIMUM3( d, e, f ) ); 
} // end main



