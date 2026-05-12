#include<iostream>
using namespace std;
void digit_sum(int n, int &sum)
{
    if(n == 0)
    {
        return;
    }
    sum += n % 10;
    digit_sum(n / 10, sum);
}
int main()
{
    int num = 12345;
    int sum = 5;
    digit_sum(num, sum);
    cout << "Sum of digits: " << sum << endl;
    return 0;
}