#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <algorithm>
#include <iostream> 
using namespace std;


template <typename Object>
class Binary_node {
public:
    Object value;
    Binary_node<Object>* left;
    Binary_node<Object>* right;

	Binary_node(Object const&);
	Object retrieve() const;
	//Binary_node<Object>* left() const;
	//Binary_node<Object>* right() const;
	bool empty() const;
	bool is_leaf() const;
	int size() const;
	int height() const;
	void clear();
};

template <typename Type>

class BinarySearchTree
{



public:
    Binary_node<Type>* root;
    BinarySearchTree() : root{ nullptr }
    {
    }
};


template <typename Type>


class IsAvlTree
{

public:
  
    bool is_avl(const Binary_node<Type>* tree) {
        if (tree == NULL) {
            return true;
        }

        if (maxHeight(tree) - minHeight(tree) > 1) {
            return false;
        }
        return isBalanced(tree->left) && isBalanced(tree->right) && isOrdered(tree);
    }

    bool isBalanced(const Binary_node<Type>* node) {
        return true;
    }

    int maxHeight(const Binary_node<Type>* root) {
        if (root == NULL) {
            return 0;
        }

        return max(1 + maxHeight(root->left), 1 + maxHeight(root->right));
    }

    int minHeight(const Binary_node<Type>* root) {
        if (root == NULL) {
            return 0;
        }

        return min(1 + maxHeight(root->left), 1 + maxHeight(root->right));
    }

    bool isOrdered(const Binary_node<Type>* root) {
        if (root == NULL) {
            return true;
        }

        if (root->left->value != NULL && root->value < root->left->value) {
            return false;
        }

        if (root->right->value != NULL && root->value > root->right->value) {
            return false;
        }

        return isOrdered(root->left) && isOrdered(root->right);
    }

};

#endif