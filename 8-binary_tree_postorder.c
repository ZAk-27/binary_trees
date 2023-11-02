#include "binary_trees.h"
/**
 * binary_tree_postorder -  creating a binary tree node.
 * @tree: ptr to the created node.
 * @func: ptr to the parent node of the node to be created.
 *
 * Return: ptr to the new node, or NULL on failure
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
