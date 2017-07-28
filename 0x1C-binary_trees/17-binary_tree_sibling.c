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
		if (node->parent->left != NULL)
		{
			return (node->parent->left);
		}
		else
		{
			return (NULL);
		}
	}
	if (node == node->parent->left)
	{
		if (node->parent->right != NULL)
		{
			return (node->parent->right);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
