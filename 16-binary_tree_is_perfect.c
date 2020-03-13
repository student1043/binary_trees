#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
if (!tree->left && !tree->right)
{
return (1);
}
if (!tree->left || !tree->right)
{
return (0);
}
if ((tree->left) && (tree->right))
{
return (0);
}
return (0);
}
