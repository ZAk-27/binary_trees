#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checking if a node is a leaf in a binary tree.
 * @node: A pntr to the node to be checked.
 * Return: 1 if the node is a leaf, or 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node)
	{
		return (0);
	}

	if (!node->left && !node->right)
	{
		return (1);
	}

	return (0);
}
