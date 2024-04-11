#include "binary_trees.h"

/**
 * binary_tree_nodes - counts all nodes with at least one child
 * @tree: the binary tree
 * Return: number of nodes with at least one child, or 0 if tree is null
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes = 0;
    size_t left_nodes = 0;
    size_t right_nodes = 0;

    if (tree == NULL)
    {
        return (0);
    }

    if (tree->left != NULL || tree->right != NULL)
    {
        nodes++;
    }

    left_nodes = binary_tree_nodes(tree->left);
    right_nodes = binary_tree_nodes(tree->right);

    nodes = left_nodes + right_nodes + nodes;

    return (nodes);

}
