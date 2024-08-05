#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: A pointer to the parent node of the new node.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)