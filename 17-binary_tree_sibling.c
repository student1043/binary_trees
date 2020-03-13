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
if (node->left && node->right)
{
r = node->right->n;
l = node->left->n;
}
if (node->left)
{
binary_tree_sibling(node->left);
}
if (node->right)
{
binary_tree_sibling(node->right);
}
return (0);
}
