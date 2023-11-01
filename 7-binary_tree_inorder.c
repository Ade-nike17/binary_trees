#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* Recursively traverse the left subtree in in-order */
	binary_tree_inorder(tree->left, func);

	/* Call the function for the current node's value */
	func(tree->n);

	/* Recursively traverse the right subtree in in-order */
	binary_tree_inorder(tree->right, func);
}
