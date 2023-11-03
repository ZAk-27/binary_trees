#include "binary_trees.h"
/**
 * binary_tree_sibling -  creates a binary tree node.
 *
 * @node: ptr to the parent node to be created.
 * nodes have two children and all leaves are at the same level.
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->left || !node->parent->right)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
/**
 * binary_tree_uncle -  creating a binary tree node.
 *
 * @node: ptr to the parent node to be created.
 * nodes have two children and all leaves are at the same level.
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
