#include <iostream>
//#include <algorithm>
using namespace std;

template<typename T>
void Merge(T*, T*, const int, const int, const int);

template<typename T>
void Mergestep(T*, T*, const int, const int);

template<typename T>
void Mergesort(T*, const int);

template<typename T>
void show1(T*);

template<typename T>
void show2(T*);

int main()
{
    double a[8] = {0, 1, 3, 5, 2, 4, 6, 8};
    double b[8] ={0};
    Merge(a, b, 1, 3, 7);
    show1(b);
    double c[12] = {0, 26, 5, 77, 1, 61, 11, 59, 15, 48, 19, 12};
    double d[12] ={0};
    Mergestep(c, d, 11, 1);
    show2(d);
    Mergestep(d, c, 11, 2);
    show2(c);
    Mergestep(c, d, 11, 4);
    show2(d);
    Mergestep(d, c, 11, 8);
    show2(c);
    cout << "测试结束!" << endl;
    cout << "开始排序Mergesort..." << endl;
    double e[12] = {0, 26, 5, 77, 1, 61, 11, 59, 15, 48, 19, 12};
    Mergesort(e, 11);
    show2(e);
    return 0;
}

template<typename T>
void Merge(T* initlist, T* resultlist, const int l, const int m, const int n)
{//单次排序
    int i;//单次第一个数组第一个元素
    int j;//单次第二个数组第一个元素
    int iresult;//单次排序后数组的索引
    for(i = l, j = m+1, iresult = l; i <= m && j <= n; iresult++)
    {//依次比较两个数组的元素，并放入新数组排序
        if(initlist[i] < initlist[j])
        {
            resultlist[iresult] = initlist[i];
            i++;
        }
        else
        {
            resultlist[iresult] = initlist[j];
            j++;
        }
    }//数组中剩余的数copy到新数组
    copy(initlist+i, initlist+m+1, resultlist+iresult);
    copy(initlist+j, initlist+n+1, resultlist+iresult);
}

template<typename T>
void Mergestep(T* initlist, T* resultlist, const int n, const int s)
{//将单次排序递归化
    int i;
    for(i = 1; i <= n-2*s+1; i+=2*s)
    {//将数组中的数字排序
        Merge(initlist, resultlist, i, i+s-1, i+2*s-1);
    }
    if((i+s-1) < n)
    {//如果有剩余能排序，则继续排序
        Merge(initlist, resultlist, i, i+s-1, n);
    }
    else
    {//如果有剩余不能排序，则拷贝下来
        copy(initlist+i, initlist+n+1, resultlist+i);
    }
}

template<typename T>
void Mergesort(T* initlist, const int n)
{//将单次递归的程序串联起来
    T* templist = new T[n+1];//申请零时空间,template[0]不用
    for(int l = 1; l < n; l*=2)
    {//对数组进行排序，每次归并排序的数量为2l（1,2,4,8,....）
        Mergestep(initlist, templist, n, l);
        l *= 2;
        Mergestep(templist, initlist, n, l);
    }
    delete templist;
}

template<typename T>
void show1(T* a)
{
    for(int i = 1; i < 8; i++)
    {
        cout << a[i] << '\t';
    }
    cout << endl;
}

template<typename T>
void show2(T* a)
{
    for(int i = 1; i < 12; i++)
    {
      cout << a[i] << '\t';
    }
    cout << endl;
}
