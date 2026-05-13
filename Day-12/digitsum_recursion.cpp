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
    int n;
    cin>>n;
    int sum = 0;
    digit_sum(n, sum);
    cout << sum << endl;
    return 0;
}