#include "binary_trees.h"

/**
 * binary_tree_node - creates a node for a binary tree
 * @parent: pointer to the parent of a node
 * @value: integer value held inside node
 * Return: node to be placed inside tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	return (node);
}
