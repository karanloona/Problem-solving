/*

	You are the receptionist at a hotel which has 10 floors, numbered from 0 to 9 and each floor has 26 rooms named from ‘A’ to ‘Z’. Being a receptionist your task is to handle booking queries.
	You get booking queries in the form of strings of size 3 where 1st character is ‘+’ means room is booked, or ‘-’ means room is freed. Second character represents the floor of the room i.e, ‘0’ to ‘9’. Third character represents the room name i.e, ‘A’ to ‘Z’.
	On booking of each room you collect 1 coin from the customer. After the end of all the booking queries you have to count the number of coins you collected.
	You may assume that the list describes a correct sequence of bookings in chronological order i.e., only free rooms can be booked, and only booked rooms can be freed.


*/

int hotelBookings(vector<string> queries) {
   	int ans=0;
    for(int i=0; i<queries.size(); i++){
      	string temp=queries[i];
        if(temp[0]=='+'){
            ans++;
        }
    }
    return ans;
}
