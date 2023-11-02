#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: is a pointer to the root node to find the sibling
 *
 * Return: NULL if node is NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
