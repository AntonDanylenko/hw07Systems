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

struct node * insert_front(struct node *start, int num){
  struct node *new;
  new = malloc(sizeof(num) + sizeof(start));
  new->i = num;
  new->next = start;
  return new;
}

struct node * free_list(struct node *start){
  struct node *new;
  new = start->next;
  free(start);
  while (new->next){
    struct node *temp = new;
    new = new->next;
    free(temp); 
  }
  return start;
}
