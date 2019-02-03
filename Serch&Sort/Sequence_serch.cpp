//顺序查找
//#include <iostream>
//using namespace std;
//
//int sequence_serch(int*,const int,const int);
//int main()
//{
//
//    int num[]{1,2,33,3,345,15,5,245,5,24774};
//    int len = 10;
//    cout <<"Please input the number you want find!"<<endl;
//    int x;
//    cin >>x;
//    int i;
//    i = sequence_serch(num,len,x);
//    if(i != -1)
//    {
//        cout << "Yes!This number in" <<i+1<<"!!"<< endl;
//    }
//    else
//    {
//        cout << "Ops!This number is not here!!" << endl;
//    }
//    return 0;
//}
//
//int sequence_serch(int* ptr_num,const int len ,const int x)
//{
//    int i;
//    for(i = 0; i < len; i++)
//        {
//            //cout <<"ptr_num"<< i << endl;
//            if (ptr_num[i] == x)
//            {
//                return i;
//            }
//        }
//    if(i == len)
//    {
//        return -1;
//    }
//}
