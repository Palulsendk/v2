#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * A struct containing the name and cost of a shopping item
 */
typedef struct {
    char name[30];
    double cost;
} item_t;

/**
 * A struct for building the tree, has the "next" item which is NULL if no next exists
 */
typedef struct node_t { // we need a name here to be able to declare the pointers in the struct
    item_t item;
    struct node_t* before; // nodes with items ordered before item
    struct node_t* after;  // nodes with items ordered after item
} node_t;

/**
 * A fancy wrapper for a tree to make our types nice, and make our program look nice
 * A valid tree has a pointer to the first element (root) of a tree or NULL
 */
typedef struct {
    node_t* root;
} tree_t;


/**
 * A function for correctly inserting a new tree-node into the tree s.t. the ordering is preserved.
 * @param node
 * @param new_node
 */
void recursive_add_node(node_t* node, node_t* new_node) {
    // TODO: Compare by name instead of cost. Increase the count if an item with the same name is found.
    if (new_node->item.cost > node->item.cost) { // sort by cost in descending order (largest cost first).
        if (node->before == NULL) {
            node->before = new_node;
        } else {
            recursive_add_node(node->before, new_node);
        }
    } else { // our new node has a cost <= than node->item.cost
        if (node->after == NULL) {
            node->after = new_node;
        } else {
            recursive_add_node(node->after, new_node);
        }
    }
}

/**
 * Appends an item to a tree of items (first argument)
 * @param tree, a valid tree struct
 * @param name, the name of the item to add
 * @param cost, the cost of the item to add
 */
void add_item(tree_t* tree, char* name, double cost) {
    node_t* new_node = (node_t*) malloc(sizeof(node_t));
    new_node->before = NULL;
    new_node->after = NULL;
    new_node->item.cost = cost;
    strcpy(new_node->item.name, name);
    if (tree->root == NULL) {
        // a base case, if the tree has no root, we need to add it!
        tree->root = new_node;
    } else {
        // the recursive case, if the tree has a root, follow the path
        recursive_add_node(tree->root, new_node);
    }
}

/**
 * A helper function for recursively printing our tree.
 * Prints in descending order of cost.
 * @param node, a valid tree node.
 */
void print_tree_node(node_t* node) {
    if (node == NULL) return;
    // first print all items that are ordered before the current (i.e. cost more)
    print_tree_node(node->before);
    // then the current
    printf("%s %lf\n", node->item.name, node->item.cost);
    // then all that are ordered after (i.e. cost less)
    print_tree_node(node->after);
}

/**
 * Prints a tree of items. Assumes that the tree is a propper tree.
 * Prints in descending order of cost.
 * @param tree, a valid tree struct
 */
void print_items(tree_t* list) {
    node_t* current = list->root;
    print_tree_node(list->root);
}

/**
 * A helper function to recursively deallocate the tree
 * @param node
 */
void deallocate_tree_node(node_t* node) {
    if (node == NULL) return;
    deallocate_tree_node(node->before);
    deallocate_tree_node(node->after);
    // it is important that we descend first before we free!
    free(node);
}

/**
 * Deallocates the memory allocated by the tree
 * @param tree, a tree to deallocate
 */
void deallocate_tree(tree_t* tree) {
    deallocate_tree_node(tree->root);
    tree->root = NULL;
}

int main(void) {
    tree_t tree_of_items = {NULL};
    char name[30];
    double cost;
    while (1) {
        printf("Input name and cost (end with 'exit 0')\n");
        scanf("%s %lf", name, &cost);
        // our magic stop-item
        if (strcmp(name, "exit") == 0) {
            print_items(&tree_of_items);
            break;
        } else {
            add_item(&tree_of_items, name, cost);
        }
    }
    // !! Remember to clean up before we stop !!
    deallocate_tree(&tree_of_items);
    return 0;
}
