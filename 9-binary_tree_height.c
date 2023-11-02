#include "binary_trees.h"
/**
 * binary_tree_height -  creating a binary tree node.
 *
 * @tree: ptr to the parent node of the created node.
 *
 * Return: ptr to the new node, on failure NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	if (right > left)
		return (right);
	else
		return (left);
}
