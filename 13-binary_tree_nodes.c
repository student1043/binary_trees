#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t c;
if (!tree)
{
return (0);
}
c = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
if (binary_tree_nodes(tree) == 1)
{
c++;
}
return (c);
}
