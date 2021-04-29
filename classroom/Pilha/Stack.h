#ifndef STACK_H
#define STACK_H
#include <cstddef> 
#include <iostream>
#include "StackNode.h"
using namespace std;
template <class T> class Stack  {    
    private:       
        StackNode<T>* m_top;  
        int m_size;
    public:
        Stack() {
            m_size=0;
            m_top=NULL;
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
            StackNode<T> *itr=m_top; 
            while (itr!=NULL) {
                StackNode<T> *nodeToBeDeleted=itr;
                itr=itr->next;
                delete nodeToBeDeleted;
            }  
            m_top=NULL;
            m_size=0;
        }   
        void push (T elem) {
            m_top=new StackNode<T>(elem,m_top);
            m_size++;
        }
        void pop() {
            if (!isEmpty()) {
                StackNode<T> *nodeToBeDeleted=m_top;            
                m_top=m_top->next;
                delete nodeToBeDeleted;
                m_size--;
            }
        }
        T top() {
            if (isEmpty())
                throw "Pilha Vazia!";
            return m_top->element; 
        }
        T topAndPop () {  
            if (isEmpty())
                throw "Pilha Vazia!";
            T topElement=top();
            pop();
            return topElement;
        }
        void print() {
            if (isEmpty()) {
                cout<<"-------PILHA VAZIA--------"<<endl;
                return;
            }
            StackNode<T> *itr=m_top;
            cout<<"-----------INÍCIO---------"<<endl;
            while (itr!=NULL) {
                cout<<itr->element<<endl;
                itr=itr->next;
            }     
            cout<<"-----------FIM------------"<<endl;
        }       
        void printRecursive() {
            if (isEmpty()) {
                  cout<<"-------PILHA VAZIA--------"<<endl;              
            }
            else {
                cout<<"-----------INÍCIO---------"<<endl;
                printRecursive(m_top);
                cout<<"-----------FIM------------"<<endl;                
            }          
        }
        void printRecursive(StackNode<T> *node) {
            if (node==NULL) 
                return;
            cout<<node->element<<endl;
            printRecursive(node->next);
        }
};
#endif /* STACK_H */

