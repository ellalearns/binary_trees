#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the binary tree
 * Return: an int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height = 0;
    int right_height = 0;
    int balance = 0;

    if (tree == NULL)
    {
        return (0);
    }

    left_height = (int) binary_tree_height(tree->left);
    right_height = (int) binary_tree_height(tree->right);

    balance = left_height - right_height;

    return (balance);
}


/**
 * binary_tree_height - count the height of a binary tree
 * @tree: the tree to use
 * Return: the height of the tree, 0 if null
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0;
size_t right_height = 0;

if (tree == NULL)
{
return (0);
}

if (tree->left != NULL)
{
left_height = 1 + binary_tree_height(tree->left);
}

if (tree->right != NULL)
{
right_height = 1 + binary_tree_height(tree->right);
}

if (left_height > right_height)
{
return (left_height);
}

return (right_height);
}
