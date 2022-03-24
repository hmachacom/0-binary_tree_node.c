#include "binary_trees.h"
/**
 * binary_tree_is_perfect - ::::::::::::
 * @tree: raiz
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (binary_tree_balance(tree) == 0 ? 1 : 0);
}
/**
 * binary_tree_balance - :::::::::::::
 * @tree: raiz
 * Return: 0 or 1
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (adicional(tree->left) - adicional(tree->right));
	return (0);
}
/**
 * adicional - Mide la altura de un árbol binario.
 * @tree: raiz.
 * Return: valor de la altura del arbol.
 */
size_t adicional(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t lef = 0, rig = 0;

		if (tree->left)
			lef = adicional(tree->left) + 1;
		else
			lef = 1;
		if (tree->right)
			rig = adicional(tree->right) + 1;
		else
			rig = 1;
		return ((lef > rig) ? lef : rig);
	}
	return (0);
}
