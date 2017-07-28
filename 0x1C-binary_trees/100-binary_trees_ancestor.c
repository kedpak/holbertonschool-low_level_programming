#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the common ancestor of two nodes
 * @first: first node to be checked
 * @second: second node to be checked
 * Return: node of common ancestry
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{

	const binary_tree_t *temp1, *temp2;


	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	temp1 = first;
	temp2 = second;

	while (temp1 != NULL)
	{
		temp1 = temp1->parent;
		while (temp2 != NULL)
		{
			if (temp1 == temp2)
			{
				return ((binary_tree_t *)first);
			}

			temp2 = temp2->parent;
		}
	}
	return (NULL);
}
