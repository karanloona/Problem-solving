/*

	Ninja and his friend are playing a game in which his friend selects an integer 'N'. He then picks 'N' random numbers and places them in an array/list ‘NUMARRAY’.
	He asks Ninja to find all those numbers which are equal to their index values i.e. 'NUMARRAY[i]' = ‘i’ where ‘i’ ranges from 0 to 'N' - 1.
	Can you help Ninja find all such numbers?
	
	For example :
		Let ‘NUMARRAY’ = [-4, -2, 2, 5]. Here, only 'NUMARRAY[2]' = 2. So, our answer is 2.
	
	Note :
		If there is no such number present in 'NUMARRAY,’ which equals its index value, then return -1.

*/

vector<int> valueEqualToIndices(vector<int>& numArray, int n) {
	vector<int> ans;
    if(n==0){
        return ans;
    }
    for(int i=0; i<n; i++){
        if(numArray[i]==i){
            ans.push_back(numArray[i]);
        }
    }
    if(ans.size()==0){
        ans.push_back(-1);
    }
    return ans;
}