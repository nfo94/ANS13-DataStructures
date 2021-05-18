#ifndef BINARYSEARCHTREE_H
#include <iostream>
#include "BinaryNode.h"
#define BINARYSEARCHTREE_H

using namespace std;

class BinarySearchTree
{
private:
    BinaryNode *m_root;

    void clear(BinaryNode *t)
    {
        if (t == NULL)
            return;
        clear(t->left);
        clear(t->right);
        delete t;
    }

    BinaryNode *insert(int x, BinaryNode *t)
    {
        if (t == NULL)
            t = new BinaryNode(x, NULL, NULL);
        else if (x < t->element)
            t->left = insert(x, t->left);
        else if (x > t->element)
            t->right = insert(x, t->right);
        return t;
    }

    void print(BinaryNode *t)
    {
        if (t == NULL)
            return;
        print(t->left);
        cout << t->element << ",";
        print(t->right);
    }

    BinaryNode *find(int x, BinaryNode *t)
    {
        if (t == NULL)
            return NULL; // elemento não está na árvore
        if (x < t->element)
            return find(x, t->left);
        else if (x > t->element)
            return find(x, t->right);
        else
            return t; // encontrou
    }

    int findMin(BinaryNode *t)
    {
        if (t->left == NULL)
            return t->element;
        return findMin(t->left);
    }

    int findMax(BinaryNode *t)
    {
        if (t->right == NULL)
            return t->element;
        return findMin(t->right);
    }

    BinaryNode *remove(int x, BinaryNode *t)
    {
        if (t == NULL)
            return t; // Item não está na árvore ou árvore vazia, não faça nada
        if (x < t->element)
            t->left = remove(x, t->left);
        else if (x > t->element)
            t->right = remove(x, t->right);
        else if (t->left != NULL && t->right != NULL)
        { // Caso 3 – nó com dois filhos
            t->element = findMin(t->right);
            t->right = remove(t->element, t->right);
        }
        else
        { // Caso 1 e 2 – nó com um ou nenhum filho
            BinaryNode *nodeToBeDeleted = t;
            t = (t->left != NULL) ? t->left : t->right;
            delete nodeToBeDeleted;
        }
        return t;
    }

public:
    BinarySearchTree()
    {
        m_root = NULL;
    }

    bool isEmpty()
    {
        return (m_root == NULL);
    }

    void clear()
    {
        clear(m_root);
        m_root = NULL;
    }

    void insert(int x)
    {
        m_root = insert(x, m_root);
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Árvore Vazia" << endl;
            return;
        }
        print(m_root);
        cout << endl;
    }

    bool find(int x)
    {
        return find(x, m_root) != NULL;
    }

    int findMin()
    {
        if (isEmpty())
        {
            throw "Árvore Vazia";
        }
        return findMin(m_root);
    }

    int findMax()
    {
        if (isEmpty())
        {
            throw "Árvore Vazia";
        }
        return findMax(m_root);
    }

    void remove(int x)
    {
        m_root = remove(x, m_root);
    }
};
#endif /* BINARYSEARCHTREE_H */
