#include<iostream>
using namespace std;
class solution
{
    public:
    int binary_search(int nums[], int n, int targt)
    {
        int start = 0;
        int end = n - 1;
        while(start < end)
    {
            int mid = start + (end - start) / 2;
            if(nums[mid] == targt)
           { 
            return mid;
           }
            else if(nums[mid] < targt)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    solution r1;
    int result = r1.binary_search(arr, n, 3);
        cout << "index of target element:"<< result << endl;
    return 0;
}