#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depths - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t leftdep = 0, rightdep = 0;
if (!tree)
{
return (0);
}
if (tree->parent)
{
rightdep = binary_tree_depth(tree->right);
leftdep = binary_tree_depth(tree->left);
}
if (leftdep > rightdep)
{
return (leftdep + 1);
}
return (rightdep + 1);
}
