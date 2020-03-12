#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int leftdep, rightdep, max;
if (!tree)
{
return (0);
}
else
{
if (tree->left)
{
leftdep = binary_tree_height(tree->left);
}
if (tree->right)
{
rightdep = binary_tree_height(tree->right);
}
if (leftdep < rightdep)
{
max = leftdep;
}
else
{
max = rightdep;
}
}
return (max + 1);
}
