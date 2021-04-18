#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList
{
public:
    ArrayList();
    int size();
    boolean isEmpty();
    void add(T elem);
    boolean add(T elem, int index);
    boolean remove(T elem);
    boolean remove(int index);
    void clear();
    T get(int index);
    int indexOf(T elem);
    void print();

    virtual ~ArrayList();
}

#endif /* ARRAYLIST_H */
