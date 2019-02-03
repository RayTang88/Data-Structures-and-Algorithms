//折半查找
//#include <iostream>
//using namespace std;
//
//int select_order(int*, int);
//
//int main()
//{
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
//}
//
//int select_order(int* ptr_num, int len)
//{
//    for(int i = 0; i <len-1; i++)
//        {
//            int Minindex = i;
//            for(int j = i+1; j < len; j++)
//                {
//                    if(ptr_num[j] < ptr_num[Minindex])
//                        {
//                            Minindex = j;
//                        }
//                }
//                if(Minindex != i)
//                {
//                    //std::swap(ptr_num[i],ptr_num[Minindex]);
//                    int tmp;
//                    tmp = ptr_num[i];
//                    ptr_num[i] = ptr_num[Minindex];
//                    ptr_num[Minindex] = tmp;
//                }
//
//        }
//        return 0;
//}
