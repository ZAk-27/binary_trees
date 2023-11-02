#include "binary_trees.h"
/**
 * binary_tree_depth -  creating a binary tree node.
 * @tree: ptr to the parent node of created node.
 * Return: pntr to the new node, on failure NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		counter = 1 + binary_tree_depth(tree->parent);

	return (counter);
}
