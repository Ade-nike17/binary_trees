#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 * Return: NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	/* Determine if the node is the left or right child of its parent */
	if (node->parent->left == node)
	{
		/* Return the right child as the sibling */
		return (node->parent->right);
	}
	else if (node->parent->right == node)
	{
		/* Retuen the left child as the sibling */
		return (node->parent->left);
	}
	else
	{
		return (NULL);
	}
}
