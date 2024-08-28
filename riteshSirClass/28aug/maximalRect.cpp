class Solution {
private:

 void charToInt(vector<int>& temp, const vector<char>& matrix) {
        for(int i = 0; i < matrix.size(); i++) {
            temp[i] = matrix[i] - '0';
        }
    }

 vector<int> nextSmallerElement(vector<int> &arr, int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}

    vector<int> previousSmallerElement(vector<int> &arr, int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();

        vector<int> next(n);
        next=nextSmallerElement(heights,n);

        vector<int> prev(n);
        prev=previousSmallerElement(heights,n);

        int area=INT_MIN;

        for(int i=0;i<n;i++){
            int l=heights[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            int newArea=l*b;
            area=max(newArea,area);
        }
        return area;

    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
       int m = matrix.size();
       int n = matrix[0].size();
       vector<int> heights(n, 0); 
        
        int maxArea = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == '1')
                    heights[j] += 1;
                else
                    heights[j] = 0;
            }
            maxArea = max(maxArea, largestRectangleArea(heights));
        }
        return maxArea;
    }
};
