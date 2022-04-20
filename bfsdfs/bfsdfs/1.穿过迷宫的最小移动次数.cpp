#include<iostream>
#include<queue>
using namespace std;

#define RIGHT 0
#define DOWN 1

typedef pair<int, int> pii;
int mark[100][100][2];



queue<pii> q;
int minimumMoves(vector<vector<int>>& grid) {
    int n = grid.size();
    int step = 0;

    while (!q.empty()) {
        q.pop();
    }
    
    //初始化
    
    mark[0][1][0] = 1; //mark[0][0][0] = 1;
    q.push(make_pair(1, RIGHT));

    

    while (!q.empty()) {
        
        
        int sz = q.size();        
        
        for (int i = 0; i < sz; i++) {
            pii now = q.front();
            q.pop();
            //到终点
            int x = now.first / n;
            int y = now.first % n;
            int d = now.second;
            if (x == n - 1 && y == n - 1 && d == 0) {
                return step;
            }

            if (d == RIGHT) {
                //右边
                if (y < n - 1 && grid[x][y+1] == 0) {
                    if (!mark[x][y+1][RIGHT]) {
                        mark[x][y + 1][RIGHT] = 1;                  
                        q.push(make_pair(x*n+y+1,RIGHT));
                    }
                }
                //下
                if (x < n - 1 && grid[x + 1][y - 1] == 0 && grid[x + 1][y] == 0) {
                    if (!mark[x + 1][y][RIGHT]) {
                        mark[x + 1][y][RIGHT] = 1;
                        q.push(make_pair((x+1)*n+y, RIGHT));
                    }
                    if (!mark[x + 1][y - 1][DOWN]) {
                        mark[x + 1][y - 1][DOWN] = 1;
                        q.push(make_pair((x+1)*n+y-1, DOWN));
                    }
                }
            }
            else if (d == DOWN) {
                //下
                if (x < n-1 && grid[x + 1][y] == 0) {
                    if (!mark[x + 1][y][DOWN]) {
                        mark[x + 1][y][DOWN] = 1;
                        q.push(make_pair((x+1)*n + y, DOWN));
                    }
                }
                //右边
                if (y < n-1 && grid[x][y + 1] == 0 && grid[x - 1][y + 1] == 0) {
                    if (!mark[x][y + 1][DOWN]) {
                        mark[x][y + 1][DOWN] = 1;
                        q.push(make_pair(x*n + (y+1),DOWN));
                    }
                    if (!mark[x - 1][y + 1][RIGHT]) {
                        mark[x - 1][y + 1][RIGHT] = 1;
                        q.push(make_pair((x-1)*n+y+1,RIGHT));
                    }
                }
            }   
        }
        step++;
    }
    return -1;


}

//int main() {
//    memset(mark, 0, sizeof(mark));
//    vector<vector<int>> grid{ {0,0,1,1,1,1},{0,0,0,0,1,1},{1,1,0,0,0,1},{1,1,1,0,0,1},{1,1,1,0,0,1},{1,1,1,0,0,0} };
//    cout << minimumMoves(grid) << endl;
//    
//    
//    
//    system("pause");
//    return 0;
//}