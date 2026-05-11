#include<iostream>
using namespace std;
class solution
{
    public:
    int linear_search(int arr[], int n, int targt)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i] == targt)
            return i;
        }
        return -1;
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    solution r1;
    int result = r1.linear_search(arr, n, 3);
        cout << "index of target element:"<< result << endl;
    return 0;
}