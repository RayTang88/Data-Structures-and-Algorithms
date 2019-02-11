#ifndef MYSTACK_H_INCLUDED
#define MYSTACK_H_INCLUDED
#include "Myutil.h"
using namespace std;

template<typename T>
class Mystack
{
private:
    T* Stack;
    int top;
    int capacity;

public:
    Mystack(int Stackcapacity = 2);
    bool Isempty() const;
    T& Top() const;
    void Push(const T& item);
    void Pop();
    ~Mystack();
};

template<typename T>
Mystack<T>::Mystack(int Stackcapacity):capacity(Stackcapacity)
{
    if(capacity < 1)
    {
        throw "Stack capacity must be >0;";
    }
    Stack = new T[capacity];
    top = -1;
}

template<typename T>
inline bool Mystack<T>::Isempty() const
{
    return top == -1;
}

template<typename T>
inline T& Mystack<T>::Top() const
{
    if(Isempty())
    {
        throw "Stack is empty!";
    }
    else
    {
        return Stack[top];
    }
}

template<typename T>
void Mystack<T>::Push(const T& item)
{
    if(top == capacity-1)
    {
        Changesize1D(Stack, capacity, 2*capacity);
        capacity *= 2;
    }

    Stack[++top] = item;
}

template<typename T>
void Mystack<T>::Pop()
{
    if(Isempty())
    {
        throw "Stack is empty, Canot delete!";
    }
    //top--;
    Stack[top--].~T();
}

template<typename T>
Mystack<T>::~Mystack()
{
    delete[] Stack;
}

#endif // MYSTACK_H_INCLUDED
