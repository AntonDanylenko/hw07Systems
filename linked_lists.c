#include <stdio.h>
#include <stdlib.h>
#include "linked_lists.h"

void print_list(struct node *start){
  while (start->next != 0){
    printf("%d, ", start->i);
    start = start->next;
  }
}
