#include "binary_trees.h"
/**
 * binary_tree_uncle - ::::::::::::
 * @node: raiz
 * Return: pointer or null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent
	|| !node->parent->parent->left || !node->parent->parent->right)
		return (NULL);
	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	else
	{
		if (node->parent->parent->right == node->parent)
		{
			return (node->parent->parent->left);
		}
	}
	return (NULL);
}
