#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int bool;
enum { false, true };

struct RaspberryPi {
  int headers;
  int ethrport;
  char hdmi[30];
  bool powerIN;
  bool a_v;
  bool camera;
  char sdcard[30];
};

/* function declaration */
void printRaspberryDetails(struct RaspberryPi *raspberry); 

void printRaspberryDetails (struct RaspberryPi *raspberry) {
   printf("\nRaspberry Pi headers amount is %d\n", raspberry->headers);
   printf("\nRaspberry Pi ethrport amount attached is %d\n", raspberry->ethrport);
   printf("\nRaspberry Pi's hdmi port is on %s\n", raspberry->hdmi);
   printf("\nRaspberry Pi's headers amount is %d\n", raspberry->headers);
   if (raspberry->powerIN) {
     printf("\nThe raspberry Pi' pwrIn connected right now");
   }
   else {
     printf("\nThe raspberry Pi is not connected right now\n");
   }
   raspberry->a_v ? printf("\nA/V connection accessible.\n") : printf("\nA/V connection not accessible.\n");
   raspberry->camera ? printf("\nCamera adapter accessible.\n") : printf("\nCamera adapter not accessible.\n");
   printf("\nSD card is %s\n", raspberry->sdcard);
}

int main (  ) {
  struct RaspberryPi RaspberryPiModelB;
  RaspberryPiModelB.headers = 5;
  RaspberryPiModelB.ethrport = 1;
  strcat(RaspberryPiModelB.hdmi, "J6");
  RaspberryPiModelB.a_v = true;
  RaspberryPiModelB.camera = true;
  RaspberryPiModelB.powerIN = true;
  strcat(RaspberryPiModelB.sdcard, "SanDisk Ultra Plus 16GB");

  printRaspberryDetails( &RaspberryPiModelB );
  printRaspberryDetails( &RaspberryPiModelB );
  return 0;
}
