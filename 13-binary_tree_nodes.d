#include "binary_trees.h"

/**
* binary_tree_nodes -  counts the nodes with at least 1 child
* @tree: pointer to root node
* Return: num of nodes with a child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t left_node;
size_t right_node;
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
{
return (0);
}

left_nodes = binary_tree_nodes(tree->left);
right_nodes = binary_tree_nodes(tree->right);

return (left_nodes + right_nodes + 1);
}
