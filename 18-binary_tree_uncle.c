#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 *
 * Return: NULL
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		/**
		* if node is NULL, has no parent or has no grandparent,
		* then, there is no uncle
		*/
		return (NULL);
	}

	/* Determine if parent is the left/right child of its parent (grandparent) */
	if (node->parent == node->parent->parent->left)
	{
		/* Return the right child of the grandparent as the uncle */
		return (node->parent->parent->right);
	}
	else
	{
		/* Return the left child of the grandparent as the uncle */
		return (node->parent->parent->left);
	}
}
