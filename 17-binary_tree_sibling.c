#include "binary_trees.h"

/**
* binary_tree_sibling -  finds the sibling of a node
* @node: pointer to node finds the sibling
* Return:  pointer to sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}

binary_tree_t *sibling = (node == node->parent->left) ?
node->parent->right : node->parent->left;

return (sibling);
}

