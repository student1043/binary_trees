#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftheight = 0, rightheight = 0;
if (!tree || (!tree->right && !tree->left))
{
return (0);
}
if (tree->left)
rightheight = binary_tree_height(tree->right) + 1;
if (tree->right)
leftheight = binary_tree_height(tree->left) + 1;
if (leftheight > rightheight)
{
return (leftheight);
}
return (rightheight);
}
