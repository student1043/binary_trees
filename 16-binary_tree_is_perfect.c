#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t hl = binary_tree_height(tree->left);
size_t hr = binary_tree_height(tree->right);
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
if (hl == hr)
{
return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
}
return (0);
}
