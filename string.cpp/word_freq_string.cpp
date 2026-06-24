#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string word;
    map<string, int> freq;

    cout << "Enter 5 words: ";

    for(int i = 0; i < 5; i++) {
        cin >> word;
        freq[word]++;
    }

    cout << "\nWord Frequency:\n";

    for(auto x : freq) {
        cout << x.first << " = " << x.second << endl;
    }

    return 0;
}
