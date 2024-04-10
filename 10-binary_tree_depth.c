#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: return the depth or 0 if node is null
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
    {
        return (0);
    }

    if (tree->parent != NULL)
    {
        depth = 1 + binary_tree_depth(tree->parent);
    }

    return (depth);
}
