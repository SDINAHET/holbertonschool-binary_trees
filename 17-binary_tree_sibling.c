#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if the node is NULL,
 *         the parent is NULL, or the node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Check if the node is the left child or right child */
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
