#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node into left of parent
 * @parent: the node to add a left unto
 * @value: value of new node
 * Return: return the newly created left node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;
    
    newNode = malloc(sizeof(binary_tree_t) * 1);
    if (newNode == NULL || parent == NULL)
    {
        return (NULL);
    }

    newNode->parent = parent;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->n = value;

    if (parent->left == NULL)
    {
        parent->left = newNode;
    }
    else
    {
        newNode->left = parent->left;
        parent->left = newNode;
        newNode->left->parent = newNode;
    }

    return (newNode);
}