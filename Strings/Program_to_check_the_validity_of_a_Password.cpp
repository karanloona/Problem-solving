/*

	Ninjas are trying to hack a system of a terrorist organization so that they can know where they will be going to attack next. But to hack the system and to get access to data they need a password that must satisfy certain conditions as described below:
	
	Note:
	1) Length of the password must be between 8 to 15 characters.
	2) At least one digit (0-9), one lowercase letter (a-z), one uppercase letter (A-Z) and one special character (%, ^, &, #, *, %, etc) must be present.
	3) Password must not contain any space.
	You are given a string ‘STR’, help ninjas to find whether it's a valid password or not.
	
	For example :
	Given ‘STR’ =  “Codingninja#1” As it satisfies all the above conditions so it is a valid password and therefore you have to return true.
*/

bool isValid(string &str)
{
	if(str.length() <8 || str.length()>15){
        return false;
    }
    bool isLower=false,isUpper=false,isDigit=false,isSpecial=false;
    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            return false;
        }
        int temp=str[i];
        if(temp>=48 && temp<=57){
            isDigit=true;
        }
        else if(temp>=65 && temp<=90){
            isUpper=true;
        }
        else if(temp>=97 && temp<=122){
            isLower=true;
        }
        else{
            isSpecial=true;
        }
    }
    if(isLower && isUpper && isDigit && isSpecial){
        return true;
    }
    else{
        return false;
    }
}
