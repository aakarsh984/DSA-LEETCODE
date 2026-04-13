#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        // optimization (important)
        if (k >= n + m - 2) return n + m - 2;

        // {x, y, remaining_k}
        queue<vector<int>> q;
        q.push({0, 0, k});

        // visited[x][y][k]
        vector<vector<vector<bool>>> vis(n, vector<vector<bool>>(m, vector<bool>(k+1, false)));
        vis[0][0][k] = true;

        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        int steps = 0;

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                auto p = q.front();
                q.pop();

                int x = p[0];
                int y = p[1];
                int curr_k = p[2];

                // destination reached
                if (x == n - 1 && y == m - 1) {
                    return steps;
                }

                for (int i = 0; i < 4; i++) {
                    int nx = x + dx[i];
                    int ny = y + dy[i];

                    if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
                        int new_k = curr_k;

                        if (grid[nx][ny] == 1) new_k--;

                        if (new_k >= 0 && !vis[nx][ny][new_k]) {
                            vis[nx][ny][new_k] = true;
                            q.push({nx, ny, new_k});
                        }
                    }
                }
            }

            steps++;
        }

        return -1;
    }
};