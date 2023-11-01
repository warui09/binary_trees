#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of a binary tree (size_t)
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	return (size_left + size_right + 1);
}
