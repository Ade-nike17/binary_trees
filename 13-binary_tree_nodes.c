#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: ptr to the root node of the tree to count the number of nodes
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/**
	* Check if the current node has at least one child,
	* and recursively count nodes in left and right subtrees
	*/
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	else
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
}
