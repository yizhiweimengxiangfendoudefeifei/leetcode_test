#pragma once
#ifndef __4_num_island_
#define __4_num_idland_

int mymove[4][2] = {
    0,1,
    1,0,
    -1,0,
    0,-1
};

struct node {
    int x, y;
};


int numIslands(vector<vector<char>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n));
    queue<node> q;
    int num = 0;//岛屿数量
    dp[0][0] = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
                num++;
                grid[i][j] = '0';
                node start;
                start.x = i, start.y = j;
                q.push(start);

                //进行搜索
                while (!q.empty()) {
                    node now = q.front();
                    q.pop();

                    for (int i = 0; i < 4; i++) {
                        int now_x = now.x + mymove[i][0];
                        int now_y = now.y + mymove[i][1];

                        if (now_x < 0 || now_x >= m || now_y < 0 || now_y >= n || dp[now_x][now_y] == 1 || grid[now_x][now_y] == '0') {
                            continue;
                        }
                        dp[now_x][now_y] = 1;//走过了
                        node temp;
                        temp.x = now_x, temp.y = now_y;
                        grid[now_x][now_y] = '0';
                        q.push(temp);

                    }


                }

            }
        }
    }
    return num;

}
#endif // !__4_num_island_

