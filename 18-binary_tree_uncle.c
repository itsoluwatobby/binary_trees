#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: is a pointer to the root node to find the uncle
 *
 * Return: NULL if node is NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
