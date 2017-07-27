#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at right subtree of tree
 * @parent: pointer to parent node of current node
 * @value: integer value held inside node
 * Return: node to be inserted
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;



	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		/* creates node with default values */
		parent->right = node;
		node->parent = parent;
		node->right = NULL;
		node->left = NULL;
		node->n = value;
		return (node);

	}
	else
	{
		/* creates node with values but swaps parent.left and node.left */
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		node->n = value;

		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
		return (node);
	}

	return (0);
}

