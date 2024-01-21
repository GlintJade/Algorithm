// import java.util.Queue;
// import java.util.LinkedList;
// class Solution {
//     int[][] maps;
//     public boolean isLoad(int x, int y){
//         return x>=0 && y>=0 && x<maps.length && y<maps[0].length && maps[x][y]==1;
//     }
//     public int solution(int[][] maps) {
//         this.maps = maps;
//         int answer = 0;
//         Queue<int[]> queue = new LinkedList<>(); //0,0,1
//         queue.add(new int[]{0, 0, 1});
//         while(queue.size()!=0){
//             int[] now = queue.poll();
//             int x = now[0], y = now[1], cost = now[2];
//             if(x==maps.length-1 && y==maps[0].length-1){return cost;}
//             this.maps[x][y]=0;
//             if(this.isLoad(x+1,y)){queue.add(new int[]{x+1,y,cost+1});}
//             if(this.isLoad(x,y+1)){queue.add(new int[]{x,y+1,cost+1});}
//             if(this.isLoad(x-1,y)){queue.add(new int[]{x-1,y,cost+1});}
//             if(this.isLoad(x,y-1)){queue.add(new int[]{x,y-1,cost+1});}
//         }
//         return -1;
//     }
// }
import java.util.Queue;
import java.util.LinkedList;

class Solution {
    int[][] maps;
    
    public boolean isRoad(int x, int y) {
        return x >= 0 && y >= 0 && x < maps.length && y < maps[0].length && maps[x][y] == 1;
    }

    public int solution(int[][] maps) {
        this.maps = maps;
        int answer = 0;
        int n = maps.length;
        int m = maps[0].length;

        // 방문 여부를 체크하는 배열
        boolean[][] visited = new boolean[n][m];

        Queue<int[]> queue = new LinkedList<>(); // 0, 0, 1
        queue.add(new int[]{0, 0, 1});
        visited[0][0] = true;

        while (!queue.isEmpty()) {
            int[] now = queue.poll();
            int x = now[0], y = now[1], cost = now[2];

            if (x == n - 1 && y == m - 1) {
                return cost;
            }

            // 현재 위치에서 이동 가능한 방향 탐색
            int[][] directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
            for (int[] dir : directions) {
                int nx = x + dir[0];
                int ny = y + dir[1];

                // 이동 가능하고 아직 방문하지 않은 위치라면 큐에 추가하고 방문 체크
                if (isRoad(nx, ny) && !visited[nx][ny]) {
                    queue.add(new int[]{nx, ny, cost + 1});
                    visited[nx][ny] = true;
                }
            }
        }
        return -1;
    }
}