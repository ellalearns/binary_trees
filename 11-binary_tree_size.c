#include "binary_trees.h"

/**
 * binary_tree_size - function to measure size of binary tree
 * @tree: the tree to measure the size (count of all nodes)
 * Return: number of nodes (size) or 0 if tree is null
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size = 0;

    if (tree == NULL)
    {
        return (0);
    }

    size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

    return (size);
}
