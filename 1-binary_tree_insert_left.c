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
binary_tree_t *temp;
prt = malloc(sizeof(binary_tree_t));
temp = malloc(sizeof(binary_tree_t));
if (!parent)
{
return (NULL);
}
if (!prt)
{
return (NULL);
}
prt->parent = parent;
prt->n = value;
prt->right = NULL;
prt->left = parent->left;

if (parent->left)
{
temp->left = parent->left;
parent = prt;
parent->left = temp->left;
}
else
{
return (NULL);
}
return (prt);
}
