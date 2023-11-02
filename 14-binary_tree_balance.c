#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance
 *			factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure
 *	the balance factor
 * Return: 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (left_height - right_height);
}
