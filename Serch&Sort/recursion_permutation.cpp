#include <iostream>
using namespace std;

int c1 = 0;
int c2 = 0;
void show(char* p, int m)
{
    for(int i = 0; i <= m; i++)
    {
        cout << p[i];
    }
    cout << endl;
}

void Permutation(char* p, int k, int m)
{
    cout << "c1 =" <<" "<< ++c1 <<endl;
    if(k == m)
    {
        show(p, m);
    }
    else
    {
        for(int j = k; j <= m; j++)
        {
            swap(p[k], p[j]);//交换每个字母为首字母
            Permutation(p, k+1, m);//每次交换后调用递归，循环将后面的字母座位首字母，直到拍到最后一个字母，输出。
            cout << "c2 =" <<" "<< ++c2 <<endl;
            swap(p[k], p[j]);//将之前交换的位置换回来
        }
        cout << endl;
    }
}

int main()
{
    char S[] = {"abc"};
    Permutation(S, 0, 2);
    return 0;
}
