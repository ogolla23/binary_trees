#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to node root
* Return:  measure the height.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
else
{
/* compute the height of each subtree */
size_t lHeight = binary_tree_height(tree->left);
size_t rHeight = binary_tree_height(tree->right);

/* use the larger one */
if (lHeight > rHeight)
{
return (lHeight + 1);
}
else
{
return (rHeight + 1);
}
}
}

