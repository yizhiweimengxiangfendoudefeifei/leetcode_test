#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int maxRepeating(string sequence, string word) {
	int ans = 0;
    string curr = word;

    while (sequence.find(curr) != string::npos) {
        ++ans;
        curr += word;
    }
    return ans;
    
}
//int main() {
//    cout << maxRepeating("abbab", "ab") << endl;
//	system("pause");
//	return 0;
//}

