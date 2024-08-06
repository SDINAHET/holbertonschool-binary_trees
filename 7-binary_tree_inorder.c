#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *
 * Description: This function performs an in-order traversal of the binary tree.
 *              It visits the left subtree, then the current node, and finally
 *              the right subtree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

    /* Traverse the left subtree */
	binary_tree_inorder(tree->left, func);

    /* Apply the function to the current node's value */
	func(tree->n);

    /* Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
