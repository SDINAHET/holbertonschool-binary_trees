#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node, or 0 if the node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;

	if (tree == NULL)
	{
		return (0);
	}
	i = 0;
	while (tree->parent != NULL)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}
