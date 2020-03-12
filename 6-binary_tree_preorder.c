#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Entry point
 * @tree: tree
 * @func: function
 * Return: Always 0 (Success)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
{
return;
}
binary_tree_preorder(tree->left);
binary_tree_preorder(tree->right);
}
