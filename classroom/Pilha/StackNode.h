#ifndef STACKNODE_H
#define STACKNODE_H
#include <cstdlib>
using namespace std;
template <class T> class StackNode {
    public:
        T element;
        StackNode* next;
        StackNode (T e) {
            element=e;
            next=NULL;
        }
        StackNode (T e,StackNode* n) {
            element=e;
            next=n;
        }
};        
#endif /* STACKNODE_H */

