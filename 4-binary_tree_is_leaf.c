#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node : pointer to node
* Return: 1 if is leaf 0 if not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
return (node && node->left == NULL && node->right == NULL);
}

