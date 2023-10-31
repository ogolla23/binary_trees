#include "binary_trees.h"

/**
* binary_tree_nodes -  counts the nodes with at least 1 child
* @tree: pointer to root node
* Return: num of nodes with a child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
{
return (0);
}

size_t left_nodes = binary_tree_nodes(tree->left);
size_t right_nodes = binary_tree_nodes(tree->right);

return (left_nodes + right_nodes + 1);
}
