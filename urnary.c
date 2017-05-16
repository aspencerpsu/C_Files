#include <stdio.h>
#include <string.h>

union Data {

  int i;
  float f;
  char str[20];
};

/* Versus */

struct Data_s {

  int i;
  float f;
  char str[20];

};

int main (  ) {
   
  struct Data_s data_s;
  union Data data;

  data.f = 220.500;
  printf( "data.f : %f\n", data.f );

  data.i = 10;
  printf( "data.i : %d\n", data.i );

  strcpy( data.str, "C Programming");
  printf( "data.str : %s\n", data.str );

  data_s.i = 10;
  data_s.f = 220.5;
  strcpy( data_s.str, "C Programming");

/*
  printf( "Memory size occupied by data : %d\n", sizeof(data) );
  printf( "data.i  :  %d\n", data_s.i);
  printf( "data.f  :  %f\n", data_s.f);
  printf( "data.str : %s\n", data_s.str);
  printf( "Memory size occupied by data_s : %d\n", sizeof(data_s) );
*/
  return 0;
}
