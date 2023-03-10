//Passing Arrays as Function Arguments in C
//declare a formal parameter
//tells the compiler that an integer pointer is going to be received

//void myFunction(int *param) {
//void myFunction(int param[10]) {
//void myFunction(int param[]) {
//exaple

#include <stdio.h>

/* function declaration */
double getAverage(int arr[], int size);

int main () {

   /* an int array with 5 elements */
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   /* pass pointer to the array as an argument */
   avg = getAverage( balance, 5 ) ;

   /* output the returned value */
   printf( "Average value is: %f ", avg );

   return 0;
}
