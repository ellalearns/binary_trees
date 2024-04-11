#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: the binary tree
 * Return: 1 if true, 0 if false or tree is null
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int is_perfect = 0;

if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
{
is_perfect = 1;
}

return (is_perfect);
}


/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the tree (each node should have 0 or 2 children)
 * Return: 1 if true, 0 if false or tree is null
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
int is_full = 1;

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
is_full = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
return (is_full);
}

is_full = 0;

return (is_full);
}


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

if (tree->left)
{
left_height = (int) binary_tree_height(tree->left);
}
else
{
left_height = -1;
}

if (tree->right)
{
right_height = (int) binary_tree_height(tree->right);
}
else
{
right_height = -1;
}

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
