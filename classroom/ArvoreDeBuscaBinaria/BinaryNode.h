#ifndef BINARYNODE_H
#include <iostream>
#include <cstdlib>
#define BINARYNODE_H

using namespace std;

class BinaryNode
{
public:
    int element;
    BinaryNode *left;
    BinaryNode *right;
    BinaryNode(int e, BinaryNode *l, BinaryNode *r)
    {
        element = e;
        left = l;
        right = r;
    }
    ~BinaryNode()
    {
        cout << "apagando nó " << element << endl;
    }
};
#endif /* BINARYNODE_H */
