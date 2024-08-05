#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node.
 * @parent: A pointer to the parent node where the new node will be inserted.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure or if parent is NULL.
 */
Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)