#include "binary_trees.h"
/**
 * binary_tree_sibling - encuentra el hermano de un nodo
 * @node: raiz
 * Return: pointer or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}
