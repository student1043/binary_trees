#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
{
return (0);
}
if (node->right)
{
return (node->right->n);
}
if (node->left)
{
return (node->left->n);
}
return (0);
}
