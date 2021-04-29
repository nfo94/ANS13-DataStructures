#ifndef QUEUE_H
#define QUEUE_H
#include <cstddef> 
#include <iostream>
#include "QueueNode.h"
using namespace std;
template <class T> class Queue  {    
    private:       
        QueueNode<T>* m_front;
        QueueNode<T>* m_rear;        
        int m_size;
    public:
        Queue() {
            m_size=0;
            m_front=NULL;
            m_front=NULL;            
        }
        bool isEmpty() {
            return (m_size==0);        
        }
        int size() {
            return m_size;
        }
        void clear() {
            if (isEmpty())
                return;
            QueueNode<T> *itr=m_front;
            while (itr!=NULL) {
                QueueNode<T> *nodeToBeDeleted=itr;
                itr=itr->next;
                delete nodeToBeDeleted;
            } 
            m_front=NULL;
            m_rear=NULL;
            m_size=0;
        }   
        void enqueue (T elem) {
            QueueNode<T>* newElement = new QueueNode<T>(elem,NULL);
            if (m_size==0) {       // insere em uma fila vazia
                m_front=m_rear=newElement;
            }
            else {
                m_rear->next=newElement;
                m_rear=newElement;
            }
            m_size++;
        }
        T dequeue() {
            if (isEmpty())
                throw "Pilha Vazia!";
            else {
                T elem=m_front->element;
                QueueNode<T> *nodeToBeDeleted=m_front;
                m_front=m_front->next;
                delete nodeToBeDeleted;
                m_size--;
                return elem;
            }
        }
        void print() {
            if (isEmpty()) {
            cout<<"-------FILA VAZIA--------"<<endl;
                return;
            }
            QueueNode<T> *itr=m_front;
            cout<<"-----------INÌCIO---------"<<endl;
            while (itr!=NULL) {
                cout<<itr->element<<endl;
                itr=itr->next;
            }     
            cout<<"-----------FIM------------"<<endl;
        }   
};
#endif /* QUEUE_H */

