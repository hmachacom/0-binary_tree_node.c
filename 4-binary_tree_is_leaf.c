#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Verificamos si es o no una hoja
 * @node: raiz
 * Return: 0 si falla, 1 si sirve
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!(node->right) && !(node->left))
		return (1);
	return (0);
}
