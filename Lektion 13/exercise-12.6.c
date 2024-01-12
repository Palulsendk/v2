#include <stdio.h>
#include <stdlib.h>

struct point {int x; int y;};
typedef struct point point;

struct list_node {
    void             *data;
    struct list_node *next;
};
typedef struct list_node list_node;

void print_point(point *p);
void print_circular_point_list(list_node *cl);
list_node *insert_head(list_node *cl, void *el);
list_node *insert_tail(list_node *cl, void *el);
list_node *delete_head(list_node *cl);
list_node *delete_tail(list_node *cl);
int length_of_circular_list(list_node *cl);
list_node *find_previous_node(list_node *cl);
void assert_allocation_success(list_node *ln);

int main(void) {
    point p1 = {1,2}, p2 = {3,4}, p3 = {5,6};

    list_node *circular_list = NULL;
    printf("Length of circular list: %d\n", length_of_circular_list(circular_list));

    circular_list =
            insert_tail(
                    insert_tail(
                            insert_tail(circular_list, &p1),
                            &p2),
                    &p3);
    printf("Length of circular list: %d\n", length_of_circular_list(circular_list));
    print_circular_point_list(circular_list);

    circular_list = delete_tail(circular_list);
    printf("Length of circular list: %d\n", length_of_circular_list(circular_list));
    print_circular_point_list(circular_list);

    circular_list = delete_head(circular_list);
    printf("Length of circular list: %d\n", length_of_circular_list(circular_list));
    print_circular_point_list(circular_list);

    circular_list = delete_tail(circular_list);
    printf("Length of circular list: %d\n", length_of_circular_list(circular_list));
    print_circular_point_list(circular_list);

    circular_list = delete_tail(circular_list);
    printf("Length of circular list: %d\n", length_of_circular_list(circular_list));
    print_circular_point_list(circular_list);

    return EXIT_SUCCESS;
}

void print_point(point *p){
    printf("(%1d, %1d)\n", p->x, p->y);
}

void print_circular_point_list(list_node *cl){
    list_node *cur, *prev;

    if (cl != NULL){
        cur = cl->next;
        do{
            prev = cur;
            print_point(cur->data);
            cur = cur->next;
        }
        while(prev != cl);
    }
}

/* Insert el as a new head. Return the circular list */
list_node *insert_head(list_node *cl, void *el){
    list_node *new_node = malloc(sizeof(list_node));
    assert_allocation_success(new_node);
    new_node->data = el;

    if (cl == NULL){
        new_node->next = new_node;
        return new_node;
    }
    else{
        list_node *old_head = cl->next;
        new_node->next = old_head;
        cl->next = new_node;
        return cl;
    }
}

/* Insert el as a new tail. Return the circular list */
list_node *insert_tail(list_node *cl, void *el){
    list_node *new_node = malloc(sizeof(list_node));
    assert_allocation_success(new_node);
    new_node->data = el;

    if (cl == NULL){
        new_node->next = new_node;
        return new_node;
    }
    else{
        list_node *old_head = cl->next;
        cl->next = new_node;
        new_node->next = old_head;
        return new_node;
    }
}

void assert_allocation_success(list_node *ln){
    if (ln == NULL){
        printf("Cannot allocate list node. Bye\n");
        exit(EXIT_FAILURE);
    }
}


/* Delete the head, if possible, and return the resulting (shorter) circular list */
list_node *delete_head(list_node *cl){
    if(cl == NULL){
        printf("Cannot delete from emtpy list");
        exit(EXIT_FAILURE);
    }
    else if (cl == cl->next) { /* circular list of length one */
        free(cl);
        return NULL;
    }
    else{
        list_node *node_to_delete = cl->next;
        cl->next = cl->next->next;
        free(node_to_delete);
        return cl;
    }
}

/* Delete the tail, if possible, and return the resulting (shorter) circular list */
list_node *delete_tail(list_node *cl){
    if(cl == NULL){
        printf("Cannot delete from emtpy list");
        exit(EXIT_FAILURE);
    }
    else if (cl == cl->next) { /* circular list of length one */
        free(cl);
        return NULL;
    }
    else{
        list_node *before_tail = find_previous_node(cl);
        before_tail->next = cl->next;
        free(cl);
        return before_tail;
    }
}

/* As a precondition, assume that cl is not empty and that cl is not singular. Thus the list has least two elements. */
list_node *find_previous_node(list_node *cl){
    list_node *cur = cl->next;

    while (cur->next != cl){
        cur = cur->next;
    }
    return cur;
}

int length_of_circular_list(list_node *cl){
    if (cl == NULL)
        return 0;
    else {
        int count = 0;
        list_node *cur = cl->next, *prev;
        do{
            prev = cur;
            ++count;
            cur = cur->next;
        }
        while(prev != cl);
        return count;
    }
}