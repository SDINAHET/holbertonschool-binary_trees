#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - Counts the nodes with at least one child.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The number of nodes with at least one child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t	count = 0;

	if (tree == NULL)
		return (0);

	/* Check if the current node has at least one child */
	if (tree->left != NULL || tree->right != NULL)
	{
		/* Count this node plus nodes in the left and right subtrees */
		count = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	}
	else
	{
		/* Count nodes in the left and right subtrees without counting the current node */
		count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	}

	return (count);
}
