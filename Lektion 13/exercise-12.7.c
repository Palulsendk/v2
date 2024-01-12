int int_max(int a, int b){
  return a > b ? a : b;
}

int is_leaf(tree_node *tree_ptr){
  if (tree_ptr == NULL)
    return 0;
  else if (tree_ptr->leftp == NULL && tree_ptr->rightp == NULL)
    return 1;
  else
    return 0;
}

int tree_height(tree_node *tree_ptr){
  if (tree_ptr == NULL)
    return 0;
  else if (is_leaf (tree_ptr))
    return 0;
  else return 1 + int_max(tree_height(tree_ptr->leftp), tree_height(tree_ptr->rightp));
}
