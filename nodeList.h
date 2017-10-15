#ifndef NODELIST_H
#define NODELIST_H

//structs
struct node{
  int i;
  struct node *next;
};

//Functions
void print_list(struct node *);
struct node *insert_front(struct node *, int);
struct node *free_list(struct node *);

#endif
