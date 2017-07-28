#include "binary_trees.h"

/**
 * binary_tree_sibling - return the value of a sibling of node
 * @node: node to find sibling of
 * Return: sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node->parent == NULL || node == NULL)
	{
		return (NULL);
	}

	if (node == node->parent->right)
	{

		return (node->parent->left);

	}
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}

	return (NULL);
}
