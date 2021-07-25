/*

	A thief is robbing a store and can carry a maximal weight of W into his knapsack. There are N items and the ith item weighs wi and is of value vi. Considering the constraints of the maximum weight that a knapsack can carry, you have to find and return the maximum value that a thief can generate by stealing items.


*/


int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	if(n==0 || maxWeight==0){
        return 0;
    }
    if(weight[n-1]<=maxWeight){
        return max(value[n-1]+knapsack(weight,value,n-1,maxWeight-weight[n-1]),knapsack(weight,value,n-1,maxWeight));
    }
    else if(weight[n-1]>maxWeight){
        return knapsack(weight,value,n-1,maxWeight);
    }
}