
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The depth of the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

/**
 * is_perfect_recursive - Recursively checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree.
 * @depth: The depth of the tree.
 * @level: The current level of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	/* If leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);

	/* If internal node with both children */
	if (tree->left != NULL && tree->right != NULL)
		return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));

	/* If node has only one child */
	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	/* Compute the depth of the leftmost path */
	depth = binary_tree_depth(tree->left);

	return (is_perfect_recursive(tree, depth, 0));
}
