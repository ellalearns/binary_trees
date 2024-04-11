#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the tree (each node should have 0 or 2 children)
 * Return: 1 if true, 0 if false or tree is null
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    int is_full = 1;
    int is_full_left = 1;
    int is_full_right = 1;

    if (tree == NULL)
    {
        return (0);
    }

    if (tree->left == NULL && tree->right == NULL)
    {
        return (is_full);
    }

    if (tree->left && tree->right)
    {
        is_full = binary_tree_is_full(tree->left) \
        && binary_tree_is_full(tree->right);
        return (is_full);
    }

    is_full = 0;

    return (is_full);
}
