#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
int r = 0, l = 0;
if (!node || !node->parent)
{
return (0);
}
if (node->right)
{
r = node->parent->left->n;
return (r);
}
if (node->left)
{
l = node->parent->right->n;
return (l);
}
return (0);
}
