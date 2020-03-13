#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
int r, l;
if (!node || !node->parent)
{
return (0);
}
if (node->right)
{
r = node->right->n;
return (r);
}
if (node->left)
{
l = node->left->n;
return (l);
}
return (0);
}