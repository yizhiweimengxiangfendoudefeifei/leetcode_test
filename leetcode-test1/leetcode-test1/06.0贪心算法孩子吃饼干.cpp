#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;





int solution(int& children,int[]&  cookies) {
	int len1 = sizeof(children) / sizeof(children[0]);
	int len2 = sizeof(cookies) / sizeof(cookies[0]);
	sort(children, children+len1);
	sort(cookies, cookies + len2);
	int child = 0;//能吃饱的孩子的数量
	int cook = 0;
	while (child < len1 && cook < len2) {
		if (children[child] <= cookies[cook++]) {
			child++;
		}
	}
	return child;
}

//int main() {
//	//数组如何引用传递？
//	int children[] = { 2,1 };
//	int cookies[] = { 1,2,3 };
//	cout << solution(children, cookies) << endl;
//	system("pause");
//	return 0;
//}