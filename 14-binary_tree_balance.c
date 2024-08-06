#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree.return 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Recursively compute the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* The height of the current node is 1 plus the maximum height*/
    /* of its subtrees */
	return (1 + (left_height > right_height ? left_height : right_height));
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (tree == NULL)
        return (0);

    /* Compute the height of the left and right subtrees */
    left_height = (int)binary_tree_height(tree->left);
    right_height = (int)binary_tree_height(tree->right);

    /* The balance factor is the height of the left subtree minus the height of the right subtree */
    return (left_height - right_height);
}
