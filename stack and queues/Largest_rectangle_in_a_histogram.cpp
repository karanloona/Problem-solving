/*

	You have been given an array/list 'HEIGHTS' of length ‘N. 'HEIGHTS' represents the histogram and each element of 'HEIGHTS' represents the height of the histogram bar. Consider that the width of each histogram is 1.
	You are supposed to return the area of the largest rectangle possible in the given histogram.
	For Example :
		In the below histogram where array/list elements are {2, 1, 5, 6, 2, 3}.
		The area of largest rectangle possible in the given histogram is 10.

*/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> left;
        stack<int> right;
        vector<int> left_v;
        vector<int> right_v;
        for(int i=0; i<heights.size(); i++){
            if(left.empty()){
                left.push(i);
                left_v.push_back(-1);
            }
            else if(heights[left.top()]<heights[i]){
                left_v.push_back(left.top());
                left.push(i);

            }
            else{
                while(!left.empty() && heights[left.top()]>=heights[i]){
                    left.pop();
                }
                if(left.empty()){
                    left_v.push_back(-1);
                    left.push(i);
                }
                else{
                        left_v.push_back(left.top());
                        left.push(i);
                }
            }
        }

        for(int i=heights.size()-1; i>=0; i--){
            if(right.empty()){
                right.push(i);
                right_v.push_back(heights.size());
            }
            else if(heights[right.top()]<heights[i]){
                right_v.push_back(right.top());
                right.push(i);
            }
            else{
                while(!right.empty() && heights[right.top()]>= heights[i]){
                    right.pop();
                }
                if(right.empty()){
                    right_v.push_back(heights.size());
                    right.push(i);
                }
                else{
                    right_v.push_back(right.top());
                    right.push(i);
                }
            }
        }
        reverse(right_v.begin(),right_v.end());
        int max=INT_MIN;
        for(int i=0; i<heights.size(); i++){
            if((right_v[i]-left_v[i]-1) * heights[i]>max){
                max=(right_v[i]-left_v[i]-1) * heights[i];
            }
        }
        return max;
    }
};