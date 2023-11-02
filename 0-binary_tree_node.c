#include "binary_trees.h"
/**
 * binary_tree_node -  creating a binary tree node.
 *
 * @parent: pntr to the parent node of the node to create.
 * @value: value in the new node.
 *
 * Return: pntr to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nvNode;

	nvNode = malloc(sizeof(binary_tree_t));
	if (!nvNode)
		return (NULL);
	nvNode->parent = parent;
	nvNode->n = value;
	nvNode->left = NULL;
	nvNode->right = NULL;
	return (nvNode);
}
