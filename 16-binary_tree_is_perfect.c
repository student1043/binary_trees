#include <stdlib.h>
#include "binary_trees.h"

/**
 * height - Entry point
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
rightheight = height(tree->right) + 1;
leftheight = height(tree->left) + 1;
if (leftheight > rightheight)
{
return (leftheight);
}
return (rightheight);
}

/**
 * binary_tree_is_perfect - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
else
{
int leftheight = height(tree->left);
int rightheight = height(tree->right);
if (leftheight - rightheight > 1 || rightheight - leftheight > 1)
{
return (0);
}
}
return (1);
}
