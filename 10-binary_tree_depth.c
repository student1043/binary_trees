#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depths - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t level = 0;
if (!tree)
{
return (0);
}
while (tree && tree->parent)
{
level += 1;
tree = tree->parent;
}
}
