/*Piotr Milewski
  Systems pd10
  HW06 -- Enlist your C skillz
  2017-10-13*/

#include <stdio.h>
#include <stdlib.h>

//Functions
void print_list(struct node *);
struct node * insert_front(struct node *, int);
struct node * free_list(struct node *);

//structs
struct node {
  int i;
  struct node *next
};

//takes a pointer to a node struct & prints out all the data in the list
void print_list(struct node *list){
  
}

/*takes a pointer to an existing list & the data to be added, creates a new node & puts it at the beginning of the list
  returns a pointer to the beginning of the list*/
struct noid * insert_front(struct node *list, int i){

}

/*takes a pointer to a list as a parameter, then goes through the entire list freeing each node
  returns a pointer to the beginning of the list*/
struct node * free_list(struct node *list){

}
