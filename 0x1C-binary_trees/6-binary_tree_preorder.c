#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse tree with preorder traversal
 * @tree: tree to be traversed
 * @func: function pointer to function
 * Return: void function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}

	if (func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
