#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest
 *			common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 *
 * Return: NULL if no LCA
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *chief, *pop;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	chief = first->parent, pop = second->parent;
	if (first == pop || !chief || (!chief->parent && pop))
		return (binary_trees_ancestor(first, pop));
	else if (chief == second || !pop || (!pop->parent && chief))
		return (binary_trees_ancestor(chief, second));
	return (binary_trees_ancestor(chief, pop));
}
