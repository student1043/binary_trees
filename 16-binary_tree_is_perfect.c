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
if (!tree->left && !tree->right)
{
return (1);
}
if (!tree->left || !tree->right)
{
return (0);
}
int hl = height(tree->left);
int hr = height(tree->right);
if ((tree->left) && (tree->right))
{
if (hl == hr)
{
return (binary_tree_is_perfect(tree->left)
    && binary_tree_is_perfect(tree->right));
}
}
return (0);
}
