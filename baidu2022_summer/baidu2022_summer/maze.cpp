#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n, m;
char arr[501][501];
int mark[501][501];

struct node {
    int x, y;
    int t=0;
};

//用来上下左右移动的数组
int mymove[4][2] = {
    0,1,
    1,0,
    -1,0,
    0,-1
};
//用来存储的队列
queue<node> q;

int sum_time(int& x, int& y) {
    
    while (!q.empty()) {
        node now = q.front();
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int now_x = now.x + mymove[i][0];
            int now_y = now.y + mymove[i][1];
            //now_x取不到n
            if (now_x < 0 || now_x >= n || now_y < 0 || now_y >= m || arr[now_x][now_y] == '#' || mark[now_x][now_y] == 1) {
                continue;
            }
            mark[now_x][now_y] = 1;
            node temp;
            temp.t = now.t + 1;
            temp.x = now_x;
            temp.y = now_y;            
            q.push(temp);
            if (arr[temp.x][temp.y] == 'T') {
                return temp.t;
            }
            
        }
    }
    return -1;
}
int main() {

    
    node start;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'S') {
                start.x = i;
                start.y = j;
                start.t = 0;
            }
        }
    }
    mark[start.x][start.y] = 1;
    while (!q.empty()) {
        q.pop();
    }
    
    q.push(start);
    cout << sum_time(n,m) << endl;
    system("pause");
    return 0;
}