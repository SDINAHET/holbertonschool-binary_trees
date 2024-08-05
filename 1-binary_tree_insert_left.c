#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: A pointer to the parent node where the new node will be inserted.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the newly created node,
 * or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if the parent pointer is NULL */
	if (parent == NULL)
	{
		return (NULL);
	}

	/*Allocate memory for the new node*/
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/*Initialize the new node*/
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	/*If the parent already has a left child*/
	if (parent->left != NULL)
	{
		/*Make the current left child the left child of the new node*/
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	/*Set the new node as the left child of the parent*/
	parent->left = new_node;

	return (new_node);
}
