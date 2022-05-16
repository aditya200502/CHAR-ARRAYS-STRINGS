#include<bits/stdc++.h>
using namespace std;
string removeduplicates(string s){
string temp;
    //firstly initialize temp as s[0].
    temp +=s[0];

    //now check from 2nd char onwards.
    for(int i=1;i<s.length();i++){

        // Add the character if result is empty or
        // the last character of result isn't the
        // currently viewed one.
        if(temp.empty() || temp.back() != s[i])
            temp+=s[i];
        // Otherwise we pop the last char from result.
        else
            temp.pop_back();
        
    }
    
        return temp;

}
int main(){

    string s;
    cout<<"enter the name::";
    cin>>s;
    cout<<removeduplicates(s);
    return 0;
}