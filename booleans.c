/* Check if variables are true or false using the _Bool typedef
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Playbook {

  _Bool shotgun;
  _Bool undercenter;
  //change_vals(&shotgun, &undercenter);

};

void main(  ) {
  struct Playbook playbook;
  playbook.shotgun = 1;
  playbook.undercenter = 0;
  printf("Amazing\n");
  if(playbook.shotgun){
    printf("playbook details shotgun!\n");
  }
  if(!playbook.undercenter){
    printf("playbook doesn't cover undercenter");
  }
}

void change_vals(_Bool *arg1, _Bool *arg2 ) {

  if (*arg1) {
    *arg1 = 1;
  } else {
    *arg2 = 1;
  }
}
