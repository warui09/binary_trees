#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: int
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full, right_full;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);

		return (left_full && right_full);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}

	return (0);
}
