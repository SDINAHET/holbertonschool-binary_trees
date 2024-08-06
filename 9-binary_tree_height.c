#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Recursively compute the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* The height of the current node is 1 plus the maximum height */
    /*of its subtrees */
	return (1 + (left_height > right_height ? left_height : right_height));
	/*l'ecriture précedente représente une forme tarnaire if -else*/

	/* Compute the maximum height of the subtrees and return it plus 1 */
	/*if (left_height > right_height)*/
	/*    return (left_height) + 1;*/
	/*else*/
	/*    return (right_height) + 1;*/
}
