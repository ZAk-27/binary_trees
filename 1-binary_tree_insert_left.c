#include "binary_trees.h"
/**
 * binary_tree_insert_left -  creating a binary tree node.
 *
 * @parent: pointer to the parent node of the node.
 * @value: value to put.
 *
 * Return: pntr to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nvNode;

	if (!parent)
		return (NULL);
	nvNode = malloc(sizeof(binary_tree_t));
	if (!nvNode)
		return (NULL);
	nvNode->parent = parent;
	nvNode->n = value;
	nvNode->left = parent->left;
	nvNode->right = NULL;
	if (parent->left)
		parent->left->parent = nvNode;
	parent->left = nvNode;
	return (nvNode);
}
