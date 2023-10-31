#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node
* @tree: pointer to node measures the depth
* Return:  measure the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
binary_tree_t *current = current;

if (tree == NULL)
{
return (0);
}

for (current = tree->parent;
		current != NULL; current = current->parent)
{
depth++;
}

return (depth);
}

