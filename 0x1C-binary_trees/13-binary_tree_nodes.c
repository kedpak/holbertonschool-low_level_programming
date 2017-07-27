#include "binary_trees.h"

/**
 * binary_tree_nodes - return the count for number of nodes that have atleast one child
 * @tree: tree to count nodes with children
 * Return: size_t type number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}

	return (0);
}
