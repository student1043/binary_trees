#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
size_t height(const binary_tree_t *tree)
{
size_t leftheight = 0, rightheight = 0;
if (!tree)
{
return (0);
}
if (tree->left)
rightheight = height(tree->right) + 1;
if (tree->right)
leftheight = height(tree->left) + 1;
if (leftheight > rightheight)
{
return (leftheight);
}
return (rightheight);
}

/**
 * binary_tree_balance - Entry point
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
heightleft = height(tree->left);
heightright = height(tree->right);
return ((heightleft - heightright));
}
