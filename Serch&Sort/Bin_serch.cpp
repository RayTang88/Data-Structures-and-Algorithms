//折半查找
#include <iostream>
using namespace std;

int Select_order(int*, int);
int Bin_serch_i(int*, int, int);
int Bin_serch_r(int*, int, int, int);


int main()
{
    int num[] = {21,228,29,648,121,1348,158};
    int len = sizeof(num)/sizeof(num[0]);
    int x;
    int i;
    Select_order(num,len);
    cout <<"The array after order:"<<endl;
    for(int k = 0; k < len; k++)
        {
            cout <<num[k]<<endl;
        }
    cout <<"Please input the number you want find!"<<endl;
    cin >>x;
    //cout << num[0] << num[len-1] << endl;
    int left = 0;
    int right = len-1;
    i = Bin_serch_r(num,left,right,x);
    if(i != -1)
    {
        cout << "Yes!This number in" <<i+1<<"!!"<< endl;
    }
    else
    {
        cout << "Ops!This number is not here!!" << endl;
    }

    return 0;
}

int Select_order(int* ptr_num, int len)
{
    for(int i = 0; i <len-1; i++)
        {
            int Minindex = i;
            for(int j = i+1; j < len; j++)
                {
                    if(ptr_num[j] < ptr_num[Minindex])
                        {
                            Minindex = j;
                        }
                }
                if(Minindex != i)
                {
                    //std::swap(ptr_num[i],ptr_num[Minindex]);
                    int tmp;
                    tmp = ptr_num[i];
                    ptr_num[i] = ptr_num[Minindex];
                    ptr_num[Minindex] = tmp;
                }

        }
        return 0;
}

int Bin_serch_i(int* ptr_num, int len, int x)
{
    int low,high,mid;
    low = 0;
    high = len-1;

    while(low <= high)
    {
        mid = (low+high)/2;
        if(x == ptr_num[mid])
        {
            return mid;
        }
        else
        {
            if(x < ptr_num[mid])
            {
                high = mid-1;
            }
            else
            {
            low = mid+1;
            }
        }

    }
        return -1;
}
int Bin_serch_r(int* ptr_num, int left, int right, const int x)
{
    int mid;
    if(ptr_num[left] <= ptr_num[right])
    {
        mid = (left + right)/2;
        if(x == ptr_num[mid])
        {
            return mid;
        }
        else if(x < ptr_num[mid])
        {
            Bin_serch_r(ptr_num, left, mid-1, x);
        }
        else
        {
            Bin_serch_r(ptr_num, mid+1, right, x);
        }
    }
    else
    {
        return -1;
    }
}
