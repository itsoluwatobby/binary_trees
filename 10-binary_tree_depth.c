#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of
 *			a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = tree->parent ? binary_tree_depth(tree->parent) + 1 : 0;
	return (depth);
}