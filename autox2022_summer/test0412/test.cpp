#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> s1;
int keypad1[9],num = 0;

int everyTime(string& s, string& keypad) {
    //��s��keypadת��Ϊint����
    for (int i = 0; i < s.size(); i++) {
        s1.push_back(s[i] - '0');
    }
    for (int i = 0; i < 9; i++) {
        keypad1[i] = keypad[i] - '0';
    }
    //��keypad1����һ��3*3�ľ���
    int arr1[3][3];
    int k1 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr1[i][j] = keypad1[k1];
            k1++;
        }
    }
  
    //�ж��Ƿ������ú������������Ƿ����2
    int prex = 0, prey = 0;
    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (arr1[j][k] == s1[i]) {

                    if (i == 0) {
                        prex = j; prey = k;
                        continue;
                    }
                    if (abs(j - prex) == 2 || abs(k - prey) == 2) {
                        //������
                        num += 2;
                        prex = j; prey = k;
                    }
                    else {
                        //����
                        prex = j; prey = k;
                        num += 1;
                    }

                }
            }
        }
    }
    return num;
}

int main() {
    string s;
    cin >> s;
    string keypad;
    cin>>keypad;
    int result = everyTime(s, keypad);
    cout << result << "\n";
    return 0;
}
