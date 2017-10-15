/*Piotr Milewski
  Systems pd10
  HW06 -- Enlist your C skillz
  2017-10-13*/

#include "nodeList.h"

#include <stdio.h>
#include <stdlib.h>

//takes a pointer to a node struct & prints out all the data in the list
void print_list(struct node *list){
  printf("\nContents of the list:\n");
  while(list){
    printf("%d\n", list->i);
    list = list->next;
  }
  printf("NULL\n");
}

/*takes a pointer to an existing list & the data to be added, creates a new node & puts it at the beginning of the list
  returns a pointer to the beginning of the list*/
struct node *insert_front(struct node *list, int i){
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->i = i;
  newNode->next = list;
  return newNode;
}

/*takes a pointer to a list as a parameter, then goes through the entire list freeing each node
  returns a pointer to the beginning of the list*/
struct node *free_list(struct node *list){
  while (list){
    struct node *tmp = list;
    list = list->next;
    free(tmp);
  }
  return list;
}
