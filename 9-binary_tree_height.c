#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int leftdep = 0, rightdep = 0;
if (!tree)
{
return (0);
}
else
{
leftdep = binary_tree_height(tree->left);
rightdep = binary_tree_height(tree->right);
if (leftdep < rightdep)
{
return (leftdep + 1);
}
else
return (rightdep + 1);
}
return (rightdep);
}
