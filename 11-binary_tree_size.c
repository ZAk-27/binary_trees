#include "binary_trees.h"
/**
 * binary_tree_size -  creating atree node binary.
 *
 * @tree: ptr to the parent node of the created node.
 *
 * Return: tr to the new node, failure NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right = binary_tree_size(tree->right);

	if (tree->left)
		left = binary_tree_size(tree->left);

	return (left + right + 1);
}
