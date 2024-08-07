class Solution {
public:
bool binarysearch(int row,int s , int e, vector<vector<int>>mat,int target){
    while(s<=e){
        int mid  = (s+e)/2;
        if(mat[row][mid]==target)
          return true;
        else if (mat[row][mid]<target){
            s=mid+1;
        }  
        else
           e = mid-1;
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size()-1;
        for(int i = 0;i<matrix.size();i++){
                 if(matrix[i][col]>=target)
                   return binarysearch(i,0,col,matrix,target);
        }
        return false;
    }
};