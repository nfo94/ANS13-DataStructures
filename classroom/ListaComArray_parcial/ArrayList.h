#include <iostream>
#ifndef ARRAYLIST_H
#define ARRAYLIST_H

using namespace std;
template <class T>
class ArrayList
{
private:
    int m_size;
    int m_capacity;
    T *m_elements;
    void aumenteCapacidadeSeNecessario()
    {
        if (m_size == m_capacity)
        {
            T *newElements = new T[m_capacity *= 2];
            for (int i = 0; i < m_size; i++)
                newElements[i] = m_elements[i];
            delete[] m_elements;
            m_elements = newElements;
        }
    }

public:
    ArrayList()
    {
        m_capacity = 5;
        m_size = 0;
        m_elements = new T[m_capacity];
    }
    int size()
    {
        return m_size;
    }
    bool isEmpty()
    {
        return m_size == 0;
    }
    void add(T element)
    {
        aumenteCapacidadeSeNecessario();
        m_elements[m_size] = element;
        m_size++;
    }
    bool add(T elem, int index)
    {
        if (index < 0 || index > m_size)
        {
            return false;
        }
        else
        {
            // COLOQUE AQUI O SEU CÓDIGO PARA COMPLETAR A IMPLEMENTAÇÃO DO MÉTODO
        }
        m_size++;
        return true;
    }
    T get(int index)
    {
        if (index < 0 || index >= m_size)
        {
            throw "Índice fora dos limites da lista!";
        }
        return m_elements[index];
    }
    int indexOf(T element)
    {
        for (int i = 0; i < m_size; i++)
        {
            if (m_elements[i] == element)
                return i;
        }
        return -1;
    }
    bool remove(int index)
    {
        if (index < 0 || index > m_size - 1)
        {
            return false;
        }
        else
        {
            // COLOQUE AQUI O SEU CÓDIGO PARA COMPLETAR A IMPLEMENTAÇÃO DO MÉTODO
        }
        return true;
    }
    bool remove(T elem)
    {
        int index = indexOf(elem);
        if (index == -1)
            return false;
        remove(index);
        return true;
    }
    void clear()
    {
        m_size = 0;
    }
    void print()
    {
        if (isEmpty())
        {
            cout << "<--------Lista Vazia--------->" << endl;
            return;
        }
        cout << "<--------Início da lista------>" << endl;
        for (int i = 0; i < m_size; i++)
            cout << m_elements[i] << endl;
        cout << "<--------Fim da lista--------->" << endl;
    }
    ~ArrayList()
    {
        delete[] m_elements;
    }
};
#endif /* ARRAYLIST_H */
