#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the binary tree
 * Return: number  of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;

if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
leaves++;
}
else
{
leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}

return (leaves);
}
