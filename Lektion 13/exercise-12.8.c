int is_binary_search_tree(tree_node *tree_ptr){
    if (tree_ptr == NULL)
        return 1;  /* The empty tree is here considered as binary search tree */
    else if (tree_ptr->leftp != NULL && tree_ptr->rightp != NULL)
        return tree_ptr->key > max_value_in_binary_tree(tree_ptr->leftp) &&
               tree_ptr->key < max_value_in_binary_tree(tree_ptr->rightp) &&
               is_binary_search_tree(tree_ptr->leftp) &&
               is_binary_search_tree(tree_ptr->rightp);
    else if (tree_ptr->leftp != NULL && tree_ptr->rightp == NULL)
        return tree_ptr->key > max_value_in_binary_tree(tree_ptr->leftp) &&
               is_binary_search_tree(tree_ptr->leftp);
    else if (tree_ptr->leftp == NULL && tree_ptr->rightp != NULL)
        return tree_ptr->key < max_value_in_binary_tree(tree_ptr->rightp) &&
               is_binary_search_tree(tree_ptr->rightp);
    else if (tree_ptr->leftp == NULL && tree_ptr->rightp == NULL)
        return 1;
    else {
        printf("is_binary_search_tree: Should not happen\n");
        exit(EXIT_FAILURE);
    }
}

int max_value_in_binary_tree(tree_node *tree_ptr){
    if (tree_ptr == NULL)
        return INT_MIN; /* Convenient value for empty trees */
    else
        return int_max(int_max(tree_ptr->key, max_value_in_binary_tree(tree_ptr->leftp)),
                       max_value_in_binary_tree(tree_ptr->rightp));
}

int int_max(int a, int b){
    return a > b ? a : b;
}
