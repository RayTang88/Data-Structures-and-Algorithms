#include <iostream>
#include "Sequence_serch.h"
#include "Bin_serch.h"
#include "select_order.h"

using namespace std;

//int main()
//{
//    //折半查找
//    int num[] = {21,228,29,648,121,1348,158,};
//    int len = sizeof(num)/sizeof(num[0]);
//    int x;
//    int i;
//    select_order(num,len);
//    cout <<"The array after order:"<<endl;
//    for(int k = 0; k < len; k++)
//        {
//            cout <<num[k]<<endl;
//        }
//    cout <<"Please input the number you want find!"<<endl;
//    cin >>x;
//
//    i = bin_serch(num,len,x);
//    if(i != -1)
//    {
//        cout << "Yes!This number in" <<i+1<<"!!"<< endl;
//    }
//    else
//    {
//        cout << "Ops!This number is not here!!" << endl;
//    }
//
//
//    //顺序查找
//    /*
//    int num[]{1,2,33,3,345,15,5,245,5,24774};
//    int len = 10;
//    cout <<"Please input the number you want find!"<<endl;
//    int x;
//    cin >>x;
//    int i;
//    i = sequence_serch(num,len,x);
//    if(i != -1){
//        cout << "Yes!This number in" <<i+1<<"!!"<< endl;
//    }else{
//        cout << "Ops!This number is not here!!" << endl;
//    }
//    */
//    return 0;
//}
