/*Piotr Milewski
  Systems pd10
  HW06 -- Enlist your C skillz
  2017-10-13*/

#include "nodeList.h"
#include "main.h"

#include <stdio.h>
#include <stdlib.h>

int main(){

  //Fills the list with multiples of 7 in a descending order and prints its contents
  struct node *a = (struct node *)malloc(sizeof(struct node));
  a->i = 7;
  int count;
  for (count = 14; count < 100; count+=7){
    a = insert_front(a, count);
  }
  print_list(a);
  
  //Empties the list and prints its contents
  free_list(a);
  print_list(a);

  return 0;
}
