#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: the binary tree to be deleted
*/
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree != NULL)
    {
        if (tree->left != NULL)
    {
        binary_tree_delete(tree->left);
    }
    else
    {
        if (tree->right != NULL)
        {
            binary_tree_delete(tree->left);
        }
        else
        {
            free(tree->right);
        }
        free(tree->left);
    }
    free(tree);
    }
    
}
