#include "binary_trees.h"

/**
 * binary_tree_node - Entry point
 *@parent: parent node
 *@value: value for new node
 * Return: New node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp, *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!(new_node))
		return (NULL);

	if (!parent)
		return (NULL);

	new_node->n = value;
	new_node->left = new_node->right = NULL;
	if (!parent->left)
	{
		parent->left = new_node;
		return (new_node);
	}
	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->left = tmp;
	}
	return (new_node);
}
