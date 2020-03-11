#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 * @parent: parent node
 * @value: value of the node
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
