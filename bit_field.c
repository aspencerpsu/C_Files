#include <stdio.h>
#include <string.h>

/* define simple structure */
/* using the ':' syntax for classifying the storage
 * size for each field attribute
 */

struct {

  unsigned int widthValidated;
  unsigned int heightValidated;
} status1;

/* define a structure with bit fields */

struct {
  unsigned int widthValidated : 1;
  unsigned int heightValidated : 1;

} status2;

int main (  ) {

  printf( "Memory size occupied by status1 : %d\n", sizeof(status1) );
  printf( "Memory size occupied by status2 : %d\n", sizeof(status2) );
  
  return 0;
}


///////////////////////////////////////////////////
//////  BIT FIELD DECLARATION MODEL   /////////////
///////////////////////////////////////////////////
/*
 The declaration of a bit-field has the following form inside a structure
 

struct {
 type [member_name] : width;
};
 
*/

