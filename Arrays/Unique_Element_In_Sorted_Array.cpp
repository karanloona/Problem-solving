/*

	Nobita wants to impress Shizuka by guessing her lucky number.
	Shizuka gave Nobita a sorted list of ‘N’ numbers such that every number occurred twice in the list except Shizuka’s lucky number which appears only once.
	Nobita asked Doraemon to help him but Doraemon doesn’t have a gadget that can find Shizuka’s lucky number.
	So, Doraemon called you to find Shizuka’s lucky number. The fate of Nobita lies in your hand.
	
	Note :
	1. Shizuka’s lucky number will surely be present.
	2. There will only be a single lucky number.
*/

int uniqueElement(vector<int> arr, int n)
{
	for(int i=0; i<n-1; i=i+2){
       	if(arr[i]!=arr[i+1]){
            return arr[i];
        }
    }
    return arr[n-1];
}
