#include "binary_trees.h"

/**
* binary_tree_balance -  measure the balance of a tree
* @tree: root node of the tree to measure the balance
* Return: num of nodes with a child
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

int heightL = tree->left ? binary_tree_height(tree->left) + 1 : 0;
int heightR = tree->right ? binary_tree_height(tree->right) + 1 : 0;

return (heightL - heightR);
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

