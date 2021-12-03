#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of parents
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nparent = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		nparent = 1;
	}

	nparent += binary_tree_nodes(tree->left);
	nparent += binary_tree_nodes(tree->right);

	return (nparent);
}
