#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 * @parent: parent node
 * @value: value of the node
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *prt;
if (!parent)
{
return (NULL);
}
prt = malloc(sizeof(binary_tree_t));
if (!prt)
{
return (NULL);
}
prt->parent = parent;
prt->n = value;
prt->left = parent->left;
prt->right = NULL;

if (parent->left)
{
prt->left->parent = prt;
}
parent->left = prt;
return (prt);
}
