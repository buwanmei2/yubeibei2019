#include <stdio.h>
int main(void) {
  char buff[256];
  //gender
  printf ("please input m or f to represent male or female:\n");
  fgets(buff, sizeof(buff), stdin);
  char gender;
  sscanf(buff, "%c", &gender);
  //age
  printf ("How old are you?\n");
  fgets (buff, sizeof(buff), stdin);
  short int age;
  sscanf (buff, "%hd", &age);
  if (age >= 22 && age <= 40 && gender == 'm') {
    printf ("OK, I will marry you!\n");
  } else {
    printf ("Sorry, I will not marry you!\n"); 
  }
  return 0;
}
