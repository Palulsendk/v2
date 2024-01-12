/* Converts distance in miles to kilometers. */

#include <stdio.h>              
#define KMS_PER_MILE 1.609      

int main(void) {
  double miles,  /* distance in miles.                 */    
         kms;    /* equivalent distance in kilometers  */

  /* Get the distance in miles. */
  printf("Enter the distance in miles> ");
  scanf("%lf", &miles); 

  /* Convert the distance to kilometers. */
  kms = KMS_PER_MILE * miles;

  /* Display the distance in kilometers. */
  printf("That equals %f kilometers.\n", kms);

  return 0;
}
