#include "binary_trees.h"
/**
 * binary_tree_height -  mide la altura de un árbol binario.
 * @tree: raiz.
 * Return: valor de la altura del arbol.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right ==  NULL && tree->left == NULL)
		return (0);
	if (binary_tree_height(tree->right) > binary_tree_height(tree->left))
		return (binary_tree_height(tree->right) + 1);
	else
		return (binary_tree_height(tree->left) + 1);
}
