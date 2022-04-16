//#include<iostream>
//#include<queue>
//using namespace std;
//char map[501][501];
//int mark[501][501];
//int n, m;
//struct node {
//    int x, y;
//    int t;
//};
//int mynext[4][2]{
//    1,0,
//    -1,0,
//    0,1,
//    0,-1
//};
//queue<node> Q;
//int BFS(int x, int y) {
//    while (!Q.empty()) {
//        node now = Q.front();
//        Q.pop();
//        for (int i = 0; i < 4; i++) {
//            int nx = now.x + mynext[i][0];
//            int ny = now.y + mynext[i][1];
//            if (nx < 0 || nx >= n || ny < 0 || ny >= m || map[nx][ny] == '#' || mark[nx][ny] == 1) { continue; }
//            mark[nx][ny] = 1;
//            node tmp;
//            tmp.x = nx; tmp.y = ny;
//            tmp.t = now.t + 1;
//            Q.push(tmp);
//            if (map[nx][ny] == 'T') { return tmp.t; }
//        }
//    }
//    return -1;
//}
////int main() {
////    node first;
////    cin >> n >> m;
////    while (!Q.empty()) Q.pop();
////    for (int i = 0; i < n; i++) {
////        for (int j = 0; j < m; j++) {
////            cin >> map[i][j];
////            mark[i][j] = 0;
////            if (map[i][j] == 'S') {
////                first.x = i; first.y = j;
////                mark[first.x][first.y] = 1;
////            }
////        }
////    }
////    first.t = 0;
////    Q.push(first);
////    cout << BFS(first.x, first.y) << endl;
////    
////    system("pause");
////    return 0;
////}