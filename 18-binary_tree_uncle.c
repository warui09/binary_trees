#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: node uncle
 *
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *g_parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	g_parent = node->parent->parent;

	if (g_parent->left->left == node || g_parent->left->right == node)
		if (g_parent->right)
			return (g_parent->right);

	if (g_parent->right->left == node || g_parent->right->right == node)
		if (g_parent->left)
			return (g_parent->left);

	return (NULL);
}
