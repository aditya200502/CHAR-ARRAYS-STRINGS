#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"enter the name::";
    cin>>s;
    int count[26] ={0};
    //create counter of character in array.
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        //lowercase 
        if(ch >='a' && ch <='z')
        {
            number = ch-'a';
        }
        //uppercase
        else
        {
            number = ch-'A';
        }
        //now store character counter.
        count[number]++;
    }
    // check for max loop.
    int maxi=-1,ans=0;
    //iteration is done for alphabets.
    for(int i=0;i<26;i++){
        
        if(maxi<count[i])
        {
            ans=i;
            maxi=count[i];
        }
    }
    char ansi='a'+ans;
    cout<<"string with max occuring character is::"<<ansi;
    return 0;
}