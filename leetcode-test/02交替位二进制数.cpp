#include<iostream>
#include<vector>
using namespace std;

bool hasAlternatingBits(int n) {
    //101
    vector<int> v;
    while (n > 0) {
        v.push_back(n % 2);
        n = n / 2;
    }
    for (int i = v.size()-1; i > 0; i--) {
        if (v[i] == v[i - 1]) {
            return false;
        } 
    }
    return true;
}

int main() {
    if (hasAlternatingBits(7)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    
    system("pause");
    return 0;
}