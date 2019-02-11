#include <iostream>
#include "Mystack.h"
using namespace std;

int main()
{
    Mystack<int> st(3);
    st.Push(99);
    st.Push(12);
    st.Push(10);
    st.Push(13);
    //cout << st.Top();
    st.Pop();
    cout << st.Top();
    //cout << "Hello world!" << endl;
    return 0;
}
