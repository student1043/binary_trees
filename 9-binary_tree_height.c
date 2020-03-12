#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
else
{
int leftdep = binary_tree_height(tree->left);
int rightdep = binary_tree_height(tree->right);
if (leftdep >= rightdep)
return (leftdep + 1);
else
{
return (rightdep + 1);
}
}
}
