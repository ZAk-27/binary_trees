#include "binary_trees.h"
/**
 * binary_tree_preorder - Trav using pre-order traversal.
 * @tree: A ptr to the to the traversed  root .
 * @func: A ptr to a function to be called.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
