#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree postorder
 * @tree: the tree to traverse
 * @func: a random function that uses the node value as a parameter
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != NULL)
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
