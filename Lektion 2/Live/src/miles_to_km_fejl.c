/*
 * Converts distance in miles to kilometers.
 */
#define KMS_PER_MILE = 1.609;      /* conversion constant       */

int main(void)
{
      Double miles,  /* distance in miles.                 */
             kms;    /* equivalent distance in kilometers  */

      /* Get the distance in miles. */
      printf("Enter the distance in miles> ");
      scanf("%lf", &miles); 

      /* Convert the distance to kilometers. */
      Kms = KMS_PER_MILE * miles;

      /* Display the distance in kilometers. */
      printf("That equals %d kilometers.\n", kms);

      Return 0;
}
