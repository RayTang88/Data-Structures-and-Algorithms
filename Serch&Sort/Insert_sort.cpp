//插入排序
#include <iostream>
using namespace std;

template<typename T>
void insertsort(T* a, int n)//函数1在while循环需要加入一个比较in ！=0
{
    int out;
    int in;//in是已经排好队的，out是未排好队的
    for(out = 1; out < n; out++)//out「[0]已经排好队，从out[1]开始
    {
        in = out;
        T temp = a[out];
        while(in != 0 && a[in - 1] > temp)
        {
                a[in] = a[in - 1];
                in--;
        }
        a[in] = temp;
    }
}

template<typename T>
void insertsort_2(T* a, int n)//函数2增加额外一个元素a[0]，在while循环不需要加入一个比较in ！=0，减少计算量
{
    int out;
    int in;//in是已经排好队的，out是未排好队的
    for(out = 2; out < n; out++)//out[0]是用于存储元素临时使用，减少计算量，不做排序，增加的out[1]已经排好队，从out[2]开始
    {
        in = out - 1;
        T temp = a[out];
        a[0] = temp;
        while(a[in] > temp)
        {
            a[in + 1] = a[in];
            in--;
        }
        a[in + 1] = temp;
    }
}

template<typename T>
void show1(T* a)
{
    for(int i = 0; i < 7; i++)
    {
        cout << a[i] <<endl;
    }
}
template<typename T>
void show2(T* a)
{
    for(int i = 1; i < 8; i++)
    {
        cout << a[i] <<endl;
    }
}
int main()
{
    double a[]= {100,200.11,50.23,1,35,20,10};
    double b[]= {0,-100,200.11,50.23,1,35,20,10};
    insertsort(a, 7);
    insertsort_2(b, 8);
    show1(a);
    show2(b);
    return 0;
}
