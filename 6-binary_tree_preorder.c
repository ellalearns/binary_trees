#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree preorder
 * @tree: the binary tree to traverse
 * @func: a random function to receive the node value as a parameter
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != NULL)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
