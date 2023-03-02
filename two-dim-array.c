// Initializing Two-Dimensional Arrays
// an array with 3 rows and each row has 4 columns

int a[3][4] = {
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};

//Accessing Two-Dimensional Array Elements
//int val = a[2][3];

// nested loop to handle a two-dimensional array

#include <stdio.h>

int main () {

   /* an array with 5 rows and 2 columns*/
	// initializing arrays
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int i, j;

   /* output each array element's value */
   for ( i = 0; i < 5; i++ ) {

      for ( j = 0; j < 2; j++ ) {
         printf("a[%d][%d] = %d\n", i,j, a[i][j] );
      }
   }

   return 0;
}
