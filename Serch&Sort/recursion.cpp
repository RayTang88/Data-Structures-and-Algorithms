////递归示例
//#include <iostream>
//using namespace std;
//void Doa()
//{
//    cout << "hello"<<endl;
//    Doa();
//}
//void Tellstory()//讲故事死循环
//{
//    cout << "从前有座山，山里有座庙，庙里有个老和尚，老和尚给小和尚讲故事："<< endl;
//    Tellstory();
//}
//
//long Factorcial(int n)//阶乘
//{
//    if(n == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return n * Factorcial(n-1);
//    }
//}
//long Factorcial_(int n)
//{
//    long result = 1;
//    for(int i = n; i > 0; i--)
//    {
//        result = result * i;
//    }
//}
//int main()
//{
//    Tellstory();
//
//    //循环实现阶乘
//    cout << Factorcial_(5);
//
//    //递归实现阶乘
//    cout << Factorcial(5);
//
//    //递归打印阶乘表
//    for(int i = 0; i <= 9; i++)
//    {
//        cout << i << "！=" << Factorcial(i) << endl;
//    }
//    return 0;
//}
