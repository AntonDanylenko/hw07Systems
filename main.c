#include <stdio.h>
#include <stdlib.h>
#include "linked_lists.h"

int main(){
  struct node *a;
  struct node *b;
  struct node *c;
  a = malloc(sizeof(0) + sizeof(b));
  a->i = 0;
  b->i = 1;
  c->i = 2;
  a->next = b;
  b->next = c;
  c->next = 0;
  print_list(a);

  struct node *z;
  z = insert_front(a, 20);
  print_list(z);

  print_list(free_list(z));
}
