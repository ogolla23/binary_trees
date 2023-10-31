#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent : pointer to the parent node of the node to create
* @value : value to put in the new node
* Return: pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (!parent)
{
return (NULL);
}

binary_tree_t *node = binary_tree_node(parent, value);
if (!node)
{
return (NULL);
}

if (parent->left)
{
node->left = parent->left;
node->left->parent = node;
}

parent->left = node;

return (node);
}
