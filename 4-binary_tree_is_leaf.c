#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Entry point
 * @node: node
 * Return: Always 0 (Success)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
{
return (0);
}
if (!node->left && !node->right)
{
return (0);
}
if (node->left)
{
binary_tree_is_leaf(node->left);
}
if (node->right)
{
binary_tree_is_leaf(node->right);
}
return (1);
}
