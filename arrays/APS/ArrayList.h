#include <iostream>
#ifndef ARRAYLIST_H
#define ARRAYLIST_H
using namespace std;

template <class T>
class ArrayList
{
private:
    // tamanho
    int m_size;
    // capacidade
    int m_capacity;
    // elementos com template (pode variar o tipo e ser array, por exemplo)
    T *m_elements;

    // função para aumentar dinamicamente a capacidade
    void growSizeIfNecessary()
    {
        // se o tamanho chegar na capacidade
        if (m_size == m_capacity)
        {
            // crie um novo tipo T com o dobro de capacidade
            T *newElements = new T[m_capacity *= 2];
            // enquanto i for menor que a capacidade anterior
            for (int i = 0; i < m_size; i++)
            {
                // atualize a nova estrutura com cada elemento do índice anterior
                newElements[i] = m_elements[i];
            }
            // delete o m_elements
            delete[] m_elements;
            // atualize com os novos elementos
            m_elements = newElements;
        }
    }

public:
    // construtor de novo ArrayList com capacidade, tamanho e elementos
    ArrayList()
    {
        m_capacity = 5;
        m_size = 0;
        m_elements = new T[m_capacity];
    };

    // método para retornar o tamanho
    int size()
    {
        return m_size;
    };

    // método para retornar se está vazio ou não
    bool isEmpty()
    {
        return m_size == 0;
    };

    // método para adicionar elemento
    void add(T elem)
    {
        // chame o método pro caso de precisar de mais espaço
        growSizeIfNecessary();
        // atribua o novo elemento na estrutura na última posição
        m_elements[m_size] = elem;
        // aumente o tamanho para acompanhar a adição
        m_size++;
    };

    // método para adicionar um elemento em um determinado índex
    bool add(T elem, int index)
    {
        // se o índex for menor que zero ou maior que o tamanho, ele não existe
        if (index < 0 || index > m_size)
        {
            return false;
        }
        growSizeIfNecessary();
        // adicione o elemento no índice desejado
        m_elements[index] = elem;
        // aumente o tamanho para acompanhar a adição
        m_size++;
        return true;
    };

    // método para remover um elemento
    bool remove(T elem)
    {
        // pegando o índex do elemento através do método indexOf
        int index = indexOf(elem);
        // verificando se é o último elemento
        if (index == -1)
        {
            // se for o último elemento retorne falso
            return false;
        }
        // se não for o último elemento, remova-o
        remove(index);
        return true;
    };

    // método para remover um elemento através do seu índex
    bool remove(int index)
    {
        // verificando se o índex existe
        if (index < 0 || index >= m_size)
        {
            throw "Index out of range";
        }
        // removendo o elemento pelo seu índex
        remove(index);
        return true;
    };

    // método para zerar o tamanho da lista
    void clear()
    {
        m_size = 0;
    };

    // método para pegar um elemento pelo seu índex
    T get(int index)
    {
        // verificando se o índex existe
        if (index < 0 || index >= m_size)
        {
            throw "Index out of range";
        }
        // retornando o elemento que está no índex
        return m_elements[index];
    };

    // método para retornar o índex a partir do elemento
    int indexOf(T elem)
    {
        // contador para ir verificando índex por índex
        for (int i = 0; i < m_size; i++)
        {
            // se o elemento do índex for o que a gente quer
            if (m_elements[i] == elem)
                // retorne o índex
                return i;
        }
        // se não retornou o índex é porque tem algum erro
        return -1;
    };

    // método para printar
    void print()
    {
        if (isEmpty())
        {
            cout << "# Empty list" << endl;
            return;
        }
        cout << "# Beginning of the list" << endl;
        for (int i = 0; i < m_size; i++)
            cout << m_elements[i] << endl;
        cout << "# End of list" << endl;
    };

    // desconstrutor
    virtual ~ArrayList()
    {
        delete[] m_elements;
    };
};

#endif /* ARRAYLIST_H */
