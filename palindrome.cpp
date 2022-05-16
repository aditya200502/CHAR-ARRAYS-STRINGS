#include<bits/stdc++.h>
using namespace std;
int main(){

    string name;
    cout<<"enter the name::";
    cin>>name;
    int count =0;
    for(int i=0; name[i] != '\0';i++){
        count ++;
    }
    int s=0;
    int e=count-1;
    bool flag=1;
    while(s<=e){

        if(name[s++]!=name[e--])
        {
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"string is palindrome";
    else
        cout<<"string is not palindrome";
    return 0;
}