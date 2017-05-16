/* BIT FIELDS */
/*
 * Bit fields allow the packing of data in a structure. This is especially useful when memory or data storage is at a premium. Typical examples include --
 * Packing several objects into a machine word. e.g. 1 bit flags can be compacted.
 * Reading external file formats -- non-standard file formats could be read in e.g., 9-bit integers.
 *
*/

struct packed_struct {
  unsigned int f1: 1;
  unsigned int f2: 1;
  unsigned int f3: 1;
  unsigned int f4: 1;
  unsigned int type: 4;
  unsigned int my_int: 9;
} pack;

struct packed_struct Package;

int main (  ) {
  Package.f1 = 2;
  Package.f2 = 2;
  Package.f3 = 2;
  Package.f4 = 2;
  Package.type = 3;
  Package.my_int = 10;
};
