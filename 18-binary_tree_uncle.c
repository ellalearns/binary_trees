#include "binary_trees.h"

/**
 * binary_tree_uncle - find a node's uncle (sibling of parent)
 * @node: the node
 * Return: node's uncle or null
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
    {
        return (NULL);
    }

    if (node->parent->parent->left && node->parent->parent->right)
    {
        if (node->parent->parent->left != node->parent)
        {
            return (node->parent->parent->left);
        }
        return (node->parent->parent->right);
    }

    return (NULL);

}
