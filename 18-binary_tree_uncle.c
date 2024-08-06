#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if the node is NULL,
 *         the node has no uncle, or the uncle does not exist.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;

	return (binary_tree_sibling(parent));
}

/**
 * binary_tree_sibling - Finds the sibling of a given node
 * @node: A pointer to the node to find the sibling of
 *
 * Return: A pointer to the sibling node, or NULL if there is none
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
