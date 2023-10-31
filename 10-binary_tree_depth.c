#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of a node (size_t)
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (!tree)
		return (depth);

	if (!tree->parent)
		return (depth);

	return (binary_tree_depth(tree->parent) + 1);
}
