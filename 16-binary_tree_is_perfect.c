#include "binary_trees.h"

/**
* binary_tree_is_perfect -  checks if a binary tree is perfect
* @tree: root node of the tree
* Return: if tree is full or not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (1);
}

if ((tree->left == NULL && tree->right != NULL) ||
(tree->left != NULL && tree->right == NULL))
{
return (0);
}

if (binary_tree_height(tree->left) !=
binary_tree_height(tree->right))
{
return (0);
}

return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
}

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

size_t lHeight = binary_tree_height(tree->left);
size_t rHeight = binary_tree_height(tree->right);

return ((lHeight > rHeight ? lHeight : rHeight) + 1);
}

