class Solution {
public:
    void dfs(int row,int col,int n,int m,vector<vector<bool>>& visited,vector<vector<int>>& image,int oldColor,int newColor){
        visited[row][col]=true;
        image[row][col] = newColor;
        //up
        if(row-1>=0 && !visited[row-1][col] && image[row-1][col]==oldColor){
            dfs(row-1,col,n,m,visited,image,oldColor,newColor);
        }
        //down
        if(row+1<n && !visited[row+1][col] && image[row+1][col]==oldColor){
            dfs(row+1,col,n,m,visited,image,oldColor,newColor);
        }
        //left
        if(col-1>=0 && !visited[row][col-1] && image[row][col-1]==oldColor){
            dfs(row,col-1,n,m,visited,image,oldColor,newColor);
        }
        //right
        if(col+1<m && !visited[row][col+1] && image[row][col+1]==oldColor){
            dfs(row,col+1,n,m,visited,image,oldColor,newColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>> visited(image.size(),vector<bool>(image[0].size(),false));
        dfs(sr,sc,image.size(),image[0].size(),visited,image,image[sr][sc],color);
        return image;
    }
};