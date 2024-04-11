#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the binary tree
 * Return: an int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    size_t left_height = 0;
    size_t right_height = 0;
    int balance = 0;

    if (tree == NULL)
    {
        return (0);
    }

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    balance = left_height - right_height;

    return (balance);
}
