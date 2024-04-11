#include "binary_trees.h"

/**
 * binary_tree_sibling - finds a node's sibling (the other node of its parent)
 * @node: the node
 * Return: the sibling node or null
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}

if (node->parent->left == NULL || node->parent->right == NULL)
{
return (NULL);
}

if (node->parent->left && node->parent->right)
{
if (node->parent->left != node)
{
return (node->parent->left);
}
return (node->parent->right);
}

return (NULL);
}
