#include <stdio.h>
#include <stdlib.h>
#include "linked_lists.h"

void print_list(struct node *start){
  printf("%d", start->i);
  while (start->next){
    start = start->next;
    printf(", %d", start->i);
  }
  printf("\n");
}
