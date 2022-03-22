#include "binary_trees.h"
/**
 * binary_tree_is_root - Escriba una función que
 * verifique si un nodo dado es una raíz
 * @node: Padre/raiz
 * Return: 0 si falla, 1 si sirve
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
