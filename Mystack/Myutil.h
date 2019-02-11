#ifndef MYUTIL_H_INCLUDED
#define MYUTIL_H_INCLUDED
using namespace std;

template<typename T>
void Changesize1D(T*, const int, const int);

template<typename T>
void Changesize1D(T* a, const int oldsize, const int newsize)
{
    if(newsize < 0)
    {
        throw "New length must >= 0";
    }
    T* temp = new T[newsize];
    int number = min(oldsize, newsize);
    copy(a, a+number, temp);
    delete[] a;
    a = temp;
}
#endif // MYUTIL_H_INCLUDED
