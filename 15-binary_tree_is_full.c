#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Base case: empty tree */
	if (tree == NULL)
		return (0);

	/* If leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If internal node with both children present */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If node has only one child */
	return (0);
}
