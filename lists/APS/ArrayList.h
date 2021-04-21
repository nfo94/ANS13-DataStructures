#ifndef ARRAYLIST_H
#define ARRAYLIST_H

template <class T> class ArrayList
{
private:
    int m_size;
    int m_capacity;
    T* m_elements;

public:
    ArrayList()
    {
        m_capacity = 5;
        m_size = 0;
        m_elements = new T[m_capacity];
    };

    int size()
    {
        return m_size;
    };

    bool isEmpty()
    {
        return m_size == 0;
    };

    void add(T elem);

    bool add(T elem, int index);

    bool remove(T elem);

    bool remove(int index);

    void clear();

    T get(int index);

    int indexOf(T elem);

    void print();

    virtual ~ArrayList();
};

#endif /* ARRAYLIST_H */
