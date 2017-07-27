#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node at left subtree of binary tree
 * @parent: parent node of the current node
 * @value: integer value held inside node
 * Return: returns node to be inserted
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;



	node = malloc(sizeof(binary_tree_t));
	if (parent->left == NULL)
	{
		/* creates node with default values */
		parent->left = node;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
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

		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
		return (node);
	}

	return (0);
}
