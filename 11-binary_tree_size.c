#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The size of the tree (total number of nodes).
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* Recursively get the size of the left and right subtrees */
    return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
