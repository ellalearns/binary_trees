#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node to the right of a parent
 * @parent: the parent node to receive a new node to right
 * @value: value of the new node
 * Return: return the new node or NULL if failure or parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;

if (parent == NULL)
{
return (NULL);
}

newNode = malloc(sizeof(binary_tree_t) * 1);
if (newNode == NULL)
{
return (NULL);
}

newNode->parent = parent;
newNode->right = NULL;
newNode->left = NULL;
newNode->n = value;

if (parent->right == NULL)
{
parent->right = newNode;
}
else
{
newNode->right = parent->right;
parent->right = newNode;
newNode->right->parent = newNode;
}

return (newNode);
}
