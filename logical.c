#include <stdio.h>
#include <string.h>
int main (void) {
  char buff[256];
  //car
  printf ("Do you have at least one car?\n");
  fgets (buff, sizeof(buff), stdin);
  char answerCar;
  sscanf (buff, "%c", &answerCar);
  //hourse
  short hourse;
  printf ("How many hourses do you have?\n");
  scanf ("%hd", &hourse);
  //parents
  printf ("Do your parents still alive?\n");
  fgets (buff, sizeof(buff), stdin);
  char answerParents;
  sscanf (buff, "%c", &answerParents);
  //deposit
  long deposit;
  printf ("How many deposit do you have?\n");
  scanf ("%ld", &deposit);
  //logical
  if ((answerCar == 'y') && (answerParents == 'y') && (hourse > 0) || (deposit >= 5000000)) {
    printf ("I will marry you!\n");
  } else {
    printf ("please go away secantly!\n");
  }
  return 0;
}
