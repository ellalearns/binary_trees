#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is a root
 * @node: the node to check
 * Return: 1 if true, 0 if false or node is null
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}

if (node->parent == NULL)
{
return (1);
}

return (0);
}
