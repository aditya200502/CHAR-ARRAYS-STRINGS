#include<bits/stdc++.h>
using namespace std;
bool compare(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}
bool isPermutation(string &s1,string &s2){
    
    //for calculating counter for string s2.
    
    int index;
    int count1[26]={0};
    int i=0;

    for(;i<s2.length();i++){
        index=s2[i]-'a';
        count1[index]++;   
    }

    //traverse in string 1.firstly first two char in s1 is taken in windowsize.

    int count2[26]={0};
    int windowsize=s2.length();

    while(i<s1.length() && i<windowsize){
        index=s1[i]-'a';
        count2[index]++;
        i++;
    }

    //compare it.

     if(compare(count1,count2))
        return 1;

    //next window

    while(i<s1.length()){
        char newchar=s1[i];
        index=newchar-'a';
        count2[index]++;

        char oldchar=s1[i-windowsize];
        index=oldchar-'a';
        count2[index]--;
        i++;

        //compare it.

        if(compare(count1,count2))
            return 1;
    }

    return 0;
}
int main(){

    string s1,s2;
    cout<<"enter string s1::";
    cin>>s1;
    cout<<"enter the substring::";
    cin>>s2;
    cout<<isPermutation(s1,s2);
    return 0;
}