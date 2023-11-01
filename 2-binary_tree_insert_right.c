#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as
 *				the right-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to put into the new node
 *
 * Return: a ponter to the new node or NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}

	return (new_node);
}
