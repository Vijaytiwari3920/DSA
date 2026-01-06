#include<iostream>
#include<vector>
using namespace std;

class ReverseArray
{
public:
    void reverseArray(vector<int> arr)
    {
        int size = arr.size();
        for (int i = 0; i < (size -1 - i) ; i++)
        {
            swap(arr[i],arr[size - i -1]);
        }
        print(arr);
    }

    void print(vector<int> arr)
    {
        int size = arr.size();
        cout<<endl<<endl;

        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    ReverseArray obj;
    vector<int> arrOdd = {1,2,3,4,5};
    vector<int> arrEven = {1,2,3,4,5,6};

    obj.reverseArray(arrOdd);
    obj.reverseArray(arrEven);
    
    return 0;
}