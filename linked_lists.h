struct node {int i; struct node *next;};
void print_list(struct node *start);
struct node * insert_front(struct node *start, int num);
struct node * free_list(struct node *start);
