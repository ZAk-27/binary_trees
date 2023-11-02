#include "binary_trees.h"
/**
 * binary_tree_insert_right -  creating a binary tree node.
 *
 * @parent: ptr to the parent node of the node.
 * @value: value to put.
 *
 * Return: ptr to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nvNode;

	if (!parent)
		return (NULL);
	nvNode = malloc(sizeof(binary_tree_t));
	if (!nvNode)
		return (NULL);
	nvNode->parent = parent;
	nvNode->n = value;
	nvNode->left = NULL;
	nvNode->right = parent->right;
	if (parent->right)
		parent->right->parent = nvNode;
	parent->right = nvNode;
	return (nvNode);
}
