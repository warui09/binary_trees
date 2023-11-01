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
	size_t height_left, height_right;

	if (!tree)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: int
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: int
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (binary_tree_balance(tree->left) < 0)
		return (0);
	if (binary_tree_balance(tree->right) < 0)
		return (0);
	if (binary_tree_balance(tree) >= 0)
		return (1);
	return (0);
}
