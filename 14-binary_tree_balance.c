#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int heightleft, heightright;
if (!tree)
{
return (0);
}
if (!tree->left && !tree->right)
{
return (1);
}
heightleft = binary_tree_balance(tree->left);
heightright = binary_tree_balance(tree->right);
return (heightleft - heightright + 1);
}
