#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree (size_t)
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, height_left, height_right;

	height = 0;

	if (!tree)
		return (height);

	if (!tree->left && !tree->right)
		return (height);

	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;

	if (height_left > height_right)
		height = height_left;
	else
		height = height_right;

	return (height);

}
