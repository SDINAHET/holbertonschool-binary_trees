#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *
 * Description: The function performs a pre-order traversal of the binary tree
 *              It visits the current node first, then traverses
 *              the left subtree,and finally traverses the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

    /* Apply the function to the current node's value */
	func(tree->n);

    /* Traverse the left subtree */
	binary_tree_preorder(tree->left, func);

     /* Traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
