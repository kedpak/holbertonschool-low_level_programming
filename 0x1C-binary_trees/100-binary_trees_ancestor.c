#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the common ancestor of two nodes
 * @first: first node to be checked
 * @second: second node to be checked
 * Return: node of common ancestry
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{


	if (first == second->parent)
	{
		return ((binary_tree_t *)first);
	}
	if (second == first->parent)
	{
		return ((binary_tree_t *)second);
	}
	while (first != NULL)
	{
		first = first->parent;
		while (second != NULL)
		{
			second = second->parent;
			if (first == second)
			{
				return ((binary_tree_t *)first);
			}
		}

	}
	return (NULL);
}
