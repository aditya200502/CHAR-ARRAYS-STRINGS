#include<bits/stdc++.h>
using namespace std;
int main(){
    char name[20];
    cout<<"enter the name::";
    cin>>name;
    int count =0;
    for(int i=0; name[i] != '\0';i++){
        count ++;
    }
    cout<<"the length of name is::"<<count;
    return 0;

}