#include<bits/stdc++.h>
using namespace std;
int remove(char ch){

    if((ch >='a' && ch <='z')||(ch >= 'A' && ch <='Z')||(ch >='0' && ch <='9'))
        return 1;
    else
        return 0;

}
char lower(char ch){

    if((ch >='a' && ch <='z') || (ch >='0' && ch <='9'))
        return ch;
    else
        ch = ch - 'A' + 'a';

    return ch;
}
bool isPalindrome(string s) {
    
    //remove unnecessary characters.
	
    string temp;
	for(int i=0;i<s.length();i++){
		
		if(remove (s[i]) )
			temp.push_back(s[i]);
		
	}
	
        //lower case conversion
	
	for(int i=0;i<temp.length();i++){
        temp[i]=lower(temp[i]);
	}
	//check palindrome
	
	int l=0;
	int e=temp.length()-1;
	bool flag =1;
        
	while(l<=e){
		
		if(temp[l++] != temp[e--]){
			flag=0;
			break;  
		}
		
	}
        
	return flag;
        
    }
int main(){

    string s;
    cout<<"enter the name::";
    cin>>s;
    cout<<isPalindrome(s);
    return 0;

}