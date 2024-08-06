#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* Recursively compute the height of the left and right subtrees */
    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    /* Return the maximum of the two heights plus one */
    /*return (1 + (left_height > right_height ? left_height : right_height));*/

   size_t max_height;

    if (left_height > right_height)
    {
        max_height = left_height;
    }
    else
    {
        max_height = right_height;
    }

    return 1 + max_height;
}
