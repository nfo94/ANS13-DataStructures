#ifndef QUEUENODE_H
#define QUEUENODE_H
#include <cstdlib>
using namespace std;
template <class T> class QueueNode {
    public:
        T element;
        QueueNode* next;
        QueueNode (T e) {
            element=e;
            next=NULL;
        }
        QueueNode (T e,QueueNode* n) {
            element=e;
            next=n;
        }
};        
#endif /* QUEUENODE_H */

