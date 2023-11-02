#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - Measuring the balance of a binary tree.
 * @tree: Ptr to the root node of the tree to balance.
 * Return: Balance of the tree, or 0 if @tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height, left_height, balance;

	if (!tree)
	{
		return (0);
	}

	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	balance = left_height - right_height;

	return (balance);
}

/**
 * binary_tree_height - Measuring the height of a binary tree.
 * @tree: Ptr to the root node of the tree to be measured.
 * Return: Height of the tree, or 0 if @tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_cnt;
	size_t lft_cnt;

	if (!tree)
	{
		return (0);
	}
	right_cnt = binary_tree_height(tree->right);
	lft_cnt = binary_tree_height(tree->left);
	if (right_cnt > lft_cnt)
	{
		return (right_cnt + 1);
	}
	return (lft_cnt + 1);
}
