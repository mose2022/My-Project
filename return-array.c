// C programming does not allow to return an entire array as an argument to a function.
// can return a pointer to an array by specifying the array's name without an index
// to return a single-dimension array: int * myFunction() {

// C does not advocate to return the address of a local variable to outside of the function, so you would have to define the local variable as static variable

// consider the following function which will generate 10 random numbers and return them using an array and call this function as follows


#include <stdio.h>

/* function to generate and return random numbers */
int * getRandom( ) {

   static int  r[10];
   int i;

   /* set the seed */
   srand( (unsigned)time( NULL ) );

   for ( i = 0; i < 10; ++i) {
      r[i] = rand();
      printf( "r[%d] = %d\n", i, r[i]);
   }

   return r;
}

/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   int *p;
   int i;

   p = getRandom();

   for ( i = 0; i < 10; i++ ) {
      printf( "*(p + %d) : %d\n", i, *(p + i));
   }

   return 0;
}
