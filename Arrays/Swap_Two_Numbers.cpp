/*

	Take two numbers as input and swap them and print the swapped values.

*/


#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
    int temp=swapValues.first;
    swapValues.first=swapValues.second;
    swapValues.second=temp;
    return swapValues;
}