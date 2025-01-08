class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int mn = image[0].size();
        int initialColor = image[sr][sc] ;
        queue<pair<int,int>>q;
        //vector<pair<int,int>>visited(size,{0,0});
        map<pair<int,int>,int>m;
        q.push({sr,sc});
        m[{sr,sc}] = 1;
        while(!q.empty()){
            int  x = q.front().first;
            int y = q.front().second;
            image[x][y] = color;
            q.pop();
            if(x-1>=0&&image[x-1][y]==initialColor&&m[{x-1,y}] ==0){
                 m[{x-1,y}] =1;
                 q.push({x-1,y});
            }
               
            if(y-1>=0&&image[x][y-1]==initialColor&&m[{x,y-1}]==0){
                m[{x,y-1}]=1;
            
               q.push({x,y-1});
            }
            if(x+1<n&&image[x+1][y]==initialColor&&m[{x+1,y}]==0){
                m[{x+1,y}]=1;
            
               q.push({x+1,y});
            }
            if(y+1<mn&&image[x][y+1]==initialColor&&m[{x,y+1}]==0){
                m[{x,y+1}]=1;
            
               q.push({x,y+1});
        }
        }
        return image;
    }
};