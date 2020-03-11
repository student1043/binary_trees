#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
{
return;
}
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
