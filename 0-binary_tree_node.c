#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node
 * @parent: the parent node of the new node
 * @value: value of new node
 * Return: the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;

newNode = malloc(sizeof(binary_tree_t) * 1);
if (newNode == NULL)
{
return (NULL);
}

newNode->parent = parent;
newNode->n = value;
newNode->left = NULL;
newNode->right = NULL;

return (newNode);
}
